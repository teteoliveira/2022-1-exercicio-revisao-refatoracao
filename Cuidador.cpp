#include "../../include/Cuidador.hpp"

Cuidador::Cuidador(std::string _nome, std::string _cpf, std::string _dataDeNascimento, 
	std::string _telefone, double _salario): nome(_nome), cpf(_cpf), dataDeNascimento(_dataDeNascimento),
	telefone(_telefone), salario(_salario){}


std::string Cuidador::getNome(){
	return this->nome;
}

void Cuidador::print(){
	std::cout << "[Cuidador]" << std::endl;
  std::cout << " Nome: " << this->nome << std::endl;
	std::cout<< " CPF: " << this->cpf << std::endl;
	std::cout<< " Telefone: " << this->telefone << std::endl;
	std::cout<< " Nascimento: " << this->dataDeNascimento << std::endl;
}

