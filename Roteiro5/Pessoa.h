#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>
#include <string>

using namespace std;


class Pessoas {
private:
    string nome;
    int idade, telefone;

public:
Pessoas(string nome);
Pessoas(string nome, int idade, int telefone);

    string getNome();
    int getIdade();
    int getTelefone();
    void setNome(string nome);
    void setIdade(int idade);
    void setTelefone(int telefone);

};


#endif
