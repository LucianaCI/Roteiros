#include "FigurasGeometricas.h"
#include "Triangulo.h"
#include "Quadrado.h"
#include "Circulo.h"
#include "iostream"

using namespace std;

int main(){

FigurasGeometricas *figuras[3];

figuras[0] = new Triangulo();
figuras[1] = new Circulo();
figuras[2] = new Quadrado();

figuras[0]->calcularArea();
figuras[1]->calcularArea();
figuras[2]->calcularArea();



}
