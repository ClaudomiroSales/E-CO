#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>
using std::string;

#include <iostream>
using std::cout;

#include "Pessoa.h"


class Funcionario : public Pessoa
{
public:
    Funcionario( string, string );
    ~Funcionario( );
    void print( ) const;

private:
    string cargo;

};

#endif //PESSOA_H