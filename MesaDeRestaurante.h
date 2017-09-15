#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H

#include "Pedido.h"
#include <string>
using namespace std;

class MesaDeRestaurante{
private:
	Pedido pedidos[6];
public:
	Pedido adicionaAoPedido();
	void zeraPedidos(Pedido pedidos[], int n);
	float calculaTotal(Pedido pedidos[], int n);
	
	MesaDeRestaurante();
	~MesaDeRestaurante();
	MesaDeRestaurante(Pedido pedidos[], int n);
};
#endif
