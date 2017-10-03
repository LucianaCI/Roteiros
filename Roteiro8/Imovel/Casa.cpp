#include "Endereco.h"
#include "Imovel.h"
#include "Casa.h"

#include <iostream>
#include <string>

Casa::Casa(){
}
Casa::~Casa(){
}

string Casa::getDescricao(){

cout << "\n\n----DESCRICAO CASA----\n";

cout << "\nInforme o numero de pavimentos: ";
cin >> numeroDePavimentos;
cout << "\nInforme o numero de quartos: ";
cin >> quantidadeDeQuartos;
cout << "\nInforme a area do terreno: ";
cin >> areaDoTerreno;
cout << "\nInforme a area ocupada: ";
cin >> areaConstruida;


}

