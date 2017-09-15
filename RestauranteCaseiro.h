#ifndef RESTAURANTECASEIRO_H
#define RESTAURANTECASEIRO_H

#include "MesaDeRestaurante.h"

class RestauranteCaseiro : private MesaDeRestaurante(Pedido pedidos[], int n){
private:
	MesaDeRestaurante mesas[6];
public:
	RestauranteCaseiro();	
	~RestauranteCaseiro();
	RestauranteCaseiro(MesaDeRestaurante mesas[], int n);


};
#endif

