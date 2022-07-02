#include "../../include/Ursidae.hpp"

int Ursidae::peixesPorPorcao = 5;

Ursidae::Ursidae(std::string _nome, int _idade, std::string _especie, 
  double _kgPeixePorDia): Animal(_nome, _idade, "Ursidae"), especie(_especie),
  kgPeixePorDia(_kgPeixePorDia){};

void Ursidae::print() {
  Animal::print();
  std::cout << "  Especie: " << this->especie << std::endl;
}

double Ursidae::calculaPeixesConsumidos(int porcaoPeixes){
  double peixesConsumidos = peixesPorPorcao*porcaoPeixes;
  return peixesConsumidos;
}