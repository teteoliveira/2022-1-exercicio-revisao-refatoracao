#include "../../include/Alimentacao.hpp"

Alimentacao::Alimentacao(int _porcao, std::string _comida, std::string _descricao, 
  Cuidador _cuid, std::string _nomeAnimal): porcao(_porcao), comida(_comida), 
  descricao(_descricao), cuid(_cuid), nomeAnimal(_nomeAnimal){}


void Alimentacao::setComida(std::string _comida){
  this->comida = _comida;
}

void Alimentacao::setPorcao(int _porcao){
  this->porcao = _porcao;
}

int Alimentacao::getPorcao(){
  return this->porcao;
}

std::string Alimentacao::getDescricao(){
  return this->descricao;
}

void Alimentacao::print(){
  std::cout << "Animal: ";
  std::cout << this->nomeAnimal << "\n";

  std::cout << " Cuidador: ";
  std::cout << this->cuid.getNome() << "\n";
}