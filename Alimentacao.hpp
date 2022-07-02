#ifndef ALIMENTACAO_HPP
#define ALIMENTACAO_HPP

#include "Cuidador.hpp"

class Alimentacao{
  private:
    int porcao;

    std::string comida;
    std::string descricao;

    Cuidador cuid;

    std::string nomeAnimal;

  public:
    Alimentacao(int _porcao, std::string _comida, std::string _descricao, Cuidador _cuid,
      std::string _nomeAnimal);

    void setComida(std::string _comida);
    void setPorcao(int _porcao);

    int getPorcao();
    std::string getDescricao();

    void print();
};

#endif
