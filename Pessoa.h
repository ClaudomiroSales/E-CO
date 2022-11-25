#ifndef PESSOA_H
#define PESSOA_H

#include <string>
using std::string;

#include <iostream>
using std::cout;


class Pessoa
{
public:
    Pessoa( string );
    virtual ~Pessoa( );
    virtual void print( ) const { cout << nome << '\n'; }

private:
    string nome;

};

#endif //PESSOA_H