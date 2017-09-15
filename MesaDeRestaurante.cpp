#include "MesaDeRestaurante.h"
#include "Pedido.h"

#include <string>
using namespace std;

MesaDeRestaurante::MesaDeRestaurante() : private Pedido(string numero, string descricao, int quantidade, float preco){
}
MesaDeRestaurante::MesaDeRestaurante(Pedido pedidos[], int n){
	this-> pedidos = pedidos;
}
