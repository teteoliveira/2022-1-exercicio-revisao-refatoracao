#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <iomanip>

class Animal {
  protected:
    std::string nome;
    int idade;
    std::string familia;
  
  public:
    Animal(std::string _nome, int _idade, std::string _familia);
    virtual void print();
};

#endif
