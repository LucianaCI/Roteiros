#include "Triangulo.h"
#include "FigurasGeometricas.h"
#include <iostream>

using namespace std;

Triangulo::Triangulo(){
}

Triangulo::~Triangulo(){
}

float Triangulo::calcularArea(){


	float base, altura;

cout << "\nDigite os valores da base e da altura do triangulo:" << endl;
cin >> base >> altura;
cout << "\nA area do triangulo eh: " << (base*altura)/2 << endl;

}
