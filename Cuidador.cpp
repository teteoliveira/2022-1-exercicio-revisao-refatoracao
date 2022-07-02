#ifndef CUIDADOR_HPP
#define CUIDADOR_HPP

#include <iostream>
#include <string>

class Cuidador{
	private:
		std::string nome;
		std::string cpf;
		std::string dataDeNascimento;
		std::string telefone;
    double salario;
			
	public:
		Cuidador(std::string _nome, std::string _cpf, std::string _dataDeNascimento, 
			std::string _telefone, double _salario); 	
			
		std::string getNome();

		void print(); 
};

#endif
