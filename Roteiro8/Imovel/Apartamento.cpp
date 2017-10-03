#include "Endereco.h"
#include "Imovel.h"
#include "Apartamento.h"

#include <iostream>
#include <string>

using namespace std;

Apartamento::Apartamento(){
}
Apartamento::~Apartamento(){
}

string Apartamento::getDescricao(){

cout <<"\n\n----DESCRICAO APARTAMENTO----\n";
cout <<"\nInforme a posicao do apartamento: ";
cin >> posicao;
cout << "\nInforme o valor do condominio: ";
cin >> valorDoCondominio;
cout << "\nInforme o numero de vagas na garam: ";
cin >> numeroDeVagasNaGaragem;
}
