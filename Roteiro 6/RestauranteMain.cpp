#include "Pedido.h"
#include "MesaDeRestaurante.h"
#include "RestauranteCaseiro.h"
#include <string>
#include <iostream>

using namespace std;

int main(){

Pedido ped[5];
MesaDeRestaurante mes[5];
RestauranteCaseiro rest;

int i, q, n, prod;
double prec;
string desc;

cout << "---- RESTAURANTE BOM SABOR ----\n\n";

cout << "\nInforme o numero da mesa: ";
cin >> n;

for(i=0; i<5; i++){

ped[i].setNumero(n);

cout << "Informe o numero de pedidos: ";
cin >> prod;

cout << "\nQuantidade do produto: ";
cin >> q;
	if(q=0){
		return -1;		
	}
ped[i].setQuantidade(q);

cout << "\nDescricao do pedido: ";
cin >> desc;
ped[i].setDescricao(desc);

cout << "\nPreco do produto: ";
cin >> prec;
ped[i].setPreco(prec);



}







}
