#include "Circulo.h"
#include "FigurasGeometricas.h"

#include <iostream>

using namespace std;

Circulo::Circulo(){
}

Circulo::~Circulo(){
}

float Circulo::calcularArea(){


	float raio;

cout << "\nDigite o valor do raio do circulo:" << endl;
cin >> raio;
cout << "\nA area do circulo eh: " << 3.14*raio*raio << endl;

}
