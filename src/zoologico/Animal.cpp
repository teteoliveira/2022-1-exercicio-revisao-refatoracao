#include "../../include/Animal.hpp"

Animal::Animal(std::string _nome, int _idade, std::string _familia):
  nome(_nome), idade(_idade), familia(_familia){};

void Animal::print() {
  std::cout << "\n[Animal]" << std::endl;
  std::cout << "  Nome: " << this->nome << std::endl;
  std::cout<< "  Idade: " << this->idade << std::endl;
  std::cout << "  Familia: " << this->familia << std::endl;
}
