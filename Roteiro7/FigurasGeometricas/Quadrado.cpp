#include "Quadrado.h"
#include "FigurasGeometricas.h"

#include <iostream>

using namespace std;

Quadrado::Quadrado(){
}

Quadrado::~Quadrado(){
}

float Quadrado::calcularArea(){


	float lado;

cout << "\nDigite o valor do lado do quadrado:" << endl;
cin >> lado;
cout << "\nA area do quadrado eh: " << lado*lado << endl;

}
