#include "Terreno.h"
#include "Imovel.h"
#include "Endereco.h"
#include <iostream>

Terreno::Terreno(){
}
Terreno::~Terreno(){
}

string Terreno::getDescricao(){

cout << "\n\n----DESCRICAO TERRENO----\n";
cout << "\nInforme a area do terreno: ";
cin >> area;

}
