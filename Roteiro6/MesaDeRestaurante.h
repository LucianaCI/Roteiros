#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H

#include "Pedido.h"
#include <string>

using namespace std;

class MesaDeRestaurante{

private:
	Pedido pedidos [5];

public:
	MesaDeRestaurante();
	virtual ~MesaDeRestaurante();

	
	void setMesaDeRestaurante(Pedido p[] , int, int, double);
	Pedido getMesaDeRestaurante();
	void adicionaAoPedido(Pedido p[], int i);
	void zeraPedidos(Pedido p[], int i);
	double calculaTotal();
};

#endif
