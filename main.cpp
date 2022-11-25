#include <iostream>
using std::cout;

#include <vector>
using std::vector;


#include "Pessoa.h"
#include "Pessoa.cpp"
#include "Funcionario.h"
#include "Funcionario.cpp"


void printPessoa( Pessoa & );

int main(int argc, char **argv)
{
    Funcionario reg1313( "Jose", "Programador" );
    printPessoa( reg1313 );

    return 0;
}

void printPessoa( Pessoa &pessoa )
{
    pessoa.print();
}