#include "Pessoa.h"
#include <iostream>
#include <string>

using namespace std;

Pessoas::Pessoas(string nome) {
    this->nome = nome;
}

Pessoas::Pessoas(string nome, int idade, int telefone) {
    this->nome = nome;
    this->idade = idade;
    this->telefone = telefone;
}

string Pessoas::getNome(){
    return nome;
}
int Pessoas::getIdade(){
    return idade;
}
int Pessoas::getTelefone(){
    return telefone;
}
void Pessoas::setNome(string nome){
    this->nome = nome;
}
void Pessoas::setIdade(int idade){
    this->idade = idade;
}
void Pessoas::setTelefone(int telefone){
    this->telefone = telefone;
}


