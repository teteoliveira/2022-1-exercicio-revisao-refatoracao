#include "../../include/Herpestidae.hpp"

double Herpestidae::quantPorcao = 1;

Herpestidae::Herpestidae(std::string _nome, int _idade, std::string _especie): 
  Animal(_nome, _idade, "Herpestidae"), especie(_especie){};

double Herpestidae::kgConsumidosDeRacao(int porcoesConsumidas) {
  double totalConsumidoRacao = quantPorcao*porcoesConsumidas;
  return totalConsumidoRacao;
}

void Herpestidae::print() {
  Animal::print();
  std::cout << " Especie: " << this->especie << std::endl;
}