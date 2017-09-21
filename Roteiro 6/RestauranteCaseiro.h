#ifndef RESTAURANTECASEIRO_H
#define RESTAURANTECASEIRO_H

#include "MesaDeRestaurante.h"
#include <string>

using namespace std;

class RestauranteCaseiro{

private:
	MesaDeRestaurante mesas [5];

public:

	RestauranteCaseiro();
	virtual~RestauranteCaseiro();

	void setRestauranteCaseiro(MesaDeRestaurante m[], int);
	MesaDeRestaurante getRestauranteCaseiro();
	double calculaTotalRestaurante();

};
#endif
