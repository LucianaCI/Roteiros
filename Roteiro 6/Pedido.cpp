#include "Pedido.h"
#include "MesaDeRestaurante.h"
#include "RestauranteCaseiro.h"
#include <string>

using namespace std;

Pedido::Pedido(){
}
Pedido::~Pedido(){
}
int Pedido::getNumero(){
	return numero;
}
int Pedido::getQuantidade(){
	return quantidade;
}
string Pedido::getDescricao(){
	return descricao;
}
double Pedido::getPreco(){
	return preco;
}

void Pedido::setNumero(int n){
	numero = n;
}
void Pedido::setQuantidade(int q){
	quantidade = q;
}
void Pedido::setDescricao(string d){
	descricao = d;
}
void Pedido::setPreco(double p){
	preco = p;
}

