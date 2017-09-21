#include "Pedido.h"
#include "MesaDeRestaurante.h"
#include "RestauranteCaseiro.h"
#include <string>
#include <iostream>

using namespace std;

MesaDeRestaurante::MesaDeRestaurante(){
}
MesaDeRestaurante::~MesaDeRestaurante(){
}

void MesaDeRestaurante::setMesaDeRestaurante(Pedido p[], int i){
	
	for(i=0; i<5; i++){
		pedidos[i] = p[i];
	}
}

Pedido MesaDeRestaurante::getMesaDeRestaurante(){
	int i;
	for(i=0; i<5; i++){
		return pedidos[i];
	}
}
void MesaDeRestaurante::adicionaAoPedido(Pedido p[], int i){
	int n;
	
	cout << "\nQuantos pedidos deseja fazer?\n";
	cin >> n;

	for(i=0; i<n; i++){
		setMesaDeRestaurante(p,i);	

	}

}
void MesaDeRestaurante::zeraPedidos(Pedido p[], int i){
	for(i=0; i<5; i++){
		p[i].setQuantidade(0);
	}


}
double MesaDeRestaurante::calculaTotal(){
	double total = 0;
	
	for(int i=0; i<5; i++){
		total += pedidos[i].getQuantidade() * pedidos[i].getPreco();	
	}
	return total;

}
