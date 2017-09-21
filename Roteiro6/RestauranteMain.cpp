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

int i, q, n, resposta;
double prec;
string desc;

cout << "---- RESTAURANTE BOM SABOR ----\n\n";

for(i=0; i<5; i++){

cout << "\n\nInforme o numero da mesa: ";
cin >> n;
//ped[i].setNumero(n);

cout << "\nMESA #" << n << "\n";

cout << "\nQuantidade do produto: ";
cin >> q;
	if(q==0){
		cout << "\nSem pedidos nessa mesa.\n";
		continue;		
	}

cout << "\nDescricao do pedido: ";
cin >> desc;
ped[i].setDescricao(desc);

cout << "\nPreco do produto: ";
cin >> prec;

mes[n].setMesaDeRestaurante(ped,i, q, prec);

cout << "\nDeseja adicionar mais produtos ao pedido?\nSim[1]\tNao[2]\n";
cin >> resposta;

	if(resposta == 1){
		mes[n].adicionaAoPedido(ped,5);

	}

cout << "\nConta da mesa #" << n << "\n";

cout << rest.calculaTotalRestaurante();

mes[i].zeraPedidos(ped, 5);//zerar a mesa para um novo cliente

}
return 0;

}
