#include "Pedido.h"
#include <string> 
using namespace std;

Pedido::Pedido(){
}
Pedido::Pedido(string numero, string descricao, int quantidade, float preco){
	this-> numero = numero;
	this-> descricao = descricao;
	this-> quantidade = quantidade;
	this-> preco = preco;
}
