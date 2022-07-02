#ifndef URSIDAE_HPP
#define URSIDAE_HPP

#include "Animal.hpp"

class Ursidae: public Animal {
  private:
    std::string especie;
    double kgPeixePorDia;

  public:
    static int peixesPorPorcao;

    Ursidae(std::string _nome, int _idade, std::string _especie, double _kgPeixesPorDia);

    void print();

    double calculaPeixesConsumidos(int porcaoPeixes);
};

#endif

