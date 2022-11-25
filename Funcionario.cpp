#include "Funcionario.h"

Funcionario::Funcionario( string nome, string cargo )
:Pessoa( nome ), cargo( cargo )
{

}

Funcionario::~Funcionario( )
{
    cout << "Destruindo Funcionario.\n";
}

void Funcionario::print( ) const
{
    Pessoa::print( );
    cout << cargo << "\n";

}