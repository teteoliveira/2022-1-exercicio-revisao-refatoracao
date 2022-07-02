#include "../include/Animal.hpp"
#include "../include/Herpestidae.hpp"
#include "../include/Ursidae.hpp"
#include "../include/Cuidador.hpp"
#include "../include/Alimentacao.hpp"

#include <vector>

int main(){
  std::vector<Animal*> animais;

  animais.push_back(new Animal("Bobby", 13,"Ursidae"));
  animais.push_back(new Animal("Jorge", 1, "Ursidae"));
  animais.push_back(new Animal("Bonina", 7, "Herpestidae"));
  animais.push_back(new Animal("Felício", 3, "Ursidae"));

  for (Animal* animal : animais){
    animal->print();
  }
  
  std::vector<Ursidae*> ursidae;

  ursidae.push_back(new Ursidae("Tony", 9, "Urso Pardo", 10.5));
  ursidae.push_back(new Ursidae("Wanda", 10, "Urso Polar", 7));

  for (Ursidae* animal : ursidae){
    animal->print();
  }

  std::vector<Herpestidae*> herpestidae;

  herpestidae.push_back(new Herpestidae("Catita", 2, "Suricato"));
  herpestidae.push_back(new Herpestidae("Wanda", 10, "Suricato"));

  herpestidae[0]->print();

  std::vector<Cuidador*> cuidadores;
  cuidadores.push_back(new Cuidador("Ana Maria Rodrigues Lopes", "1234567799", "(31) 99876-6923",
    "10/10/2000", 3000));
  cuidadores.push_back(new Cuidador("Fernanda Silva Santos", "9472567121", "(31) 99123-8970",
    "08/02/1995", 4000));

  std::vector<Alimentacao*> alimentacaoAnimais;
  alimentacaoAnimais.push_back(new Alimentacao(2, "Peixes", "Bobby só quis comer 2 porções de peixes hoje",
    *cuidadores[0], "Bobby"));
  alimentacaoAnimais.push_back(new Alimentacao(1, "Ração especial", "Catita comeu direitinho",
    *cuidadores[1], "Catita"));
  alimentacaoAnimais.push_back(new Alimentacao(3, "Ração", "Carolina estava com um apetite e tanto",
    *cuidadores[1], "Carolina"));
  alimentacaoAnimais.push_back(new Alimentacao(10, "Peixes", "Tony comeu um pouco da comida do Bobby",
    *cuidadores[0], "Tony"));

  alimentacaoAnimais[1]->setPorcao(2);
  alimentacaoAnimais[2]->setComida("Ração");

  int kgPeixeConsumidos01 = ursidae[1]->calculaPeixesConsumidos(2);
  int kgRacaoConsumidos01 = herpestidae[0]->kgConsumidosDeRacao(alimentacaoAnimais[1]->getPorcao());
  int kgRacaoConsumidos02 = herpestidae[1]->kgConsumidosDeRacao(alimentacaoAnimais[1]->getPorcao());
  int kgPeixeConsumidos02 = ursidae[0]->calculaPeixesConsumidos(10);


  std::cout <<" \n \n--------------------------------\n\nRelatorio das alimentações \n" << std::endl;

  for (Alimentacao* item : alimentacaoAnimais){
    item->print();
    std::cout << " Descricao: " << item->getDescricao() << "\n" << std::endl;
  }

  std::cout <<" \n \n--------------------------------\n\nRelatorio de kg de comida gastos \n" << std::endl;
  std::cout << "Tipo de comida: " << "Ração" << std::endl;
  std::cout << "Kg consumidos: " << kgRacaoConsumidos01 + kgRacaoConsumidos02<<std::endl;
  std::cout << "\nTipo de comida: " << "Peixe" << std::endl;
  std::cout << "Kg consumidos: " << kgPeixeConsumidos01 + kgPeixeConsumidos02<<std::endl;

  animais.clear();
  ursidae.clear();
  herpestidae.clear();
  cuidadores.clear();
  alimentacaoAnimais.clear();

  return 0;
}
