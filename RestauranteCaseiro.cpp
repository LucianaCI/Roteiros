#include "RestauranteCaseiro.h"
#include "MesaDeRestaurante.h"
#include <string>

using namespace std;

RestauranteCaseiro::RestauranteCaseiro() : private MesaDeRestaurante(Pedido pedidos[], int n){
}
RestauranteCaseiro::RestauranteCaseiro(MesaDeRestaurante mesas[6], int n){
	this->mesas = mesas;
}
