#include "RestauranteCaseiro.h"

using namespace std;

RestauranteCaseiro::RestauranteCaseiro(){
}
RestauranteCaseiro::~RestauranteCaseiro(){
}

void RestauranteCaseiro::setRestauranteCaseiro(MesaDeRestaurante m[], int i){
	for(i=0; i<5; i++){
		mesas[i] = m[i];
	}
}
MesaDeRestaurante RestauranteCaseiro::getRestauranteCaseiro(){
	int i;
	for(i=0; i<5; i++){
		return mesas[i];
	}
}
double RestauranteCaseiro::calculaTotalRestaurante(){
	int i;
	double t = 0;

	for(i=0; i<5; i++){
		t += mesas[i].calculaTotal();
	}
	return t;
}
