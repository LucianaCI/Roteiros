//
// Created by luciana on 27/08/17.
//

#include "R5Q4.h"
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

int main(){

    Pessoas registro("", 0, 0);
    int n, i;

    cout << "---- REGISTRO DE PESSOAS ----\nQuantas pessoas serao registradas?";
    cin >> n;
    for(i=0; i<n; i++){
        cout << "\nRegistro " << i+1 << "\n";
        cout << "Nome: ";
        cin >> registro.nome;
        cout << "Idade: ";
        cin >> registro.idade;
        cout << "Telefone: ";
        cin >> registro.telefone;
    }
    cout << "\n\nForam registradas " << n << " pessoas.\n";
    return 0;

}

