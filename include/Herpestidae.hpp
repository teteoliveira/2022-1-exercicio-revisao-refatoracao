#ifndef HERPESTIDAE_HPP
#define HERPESTIDAE_HPP

#include "Animal.hpp"

class Herpestidae : public Animal {
  private:
    std::string especie;

  public:
    static double quantPorcao;

    Herpestidae(std::string _nome, int _idade, std::string _especie);

    double kgConsumidosDeRacao(int porcoesConsumidas);
    void print() override;
};

#endif
