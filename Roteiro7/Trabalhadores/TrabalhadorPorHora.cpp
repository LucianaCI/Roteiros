#include "Trabalhador.h"
#include "TrabalhadorPorHora.h"
#include <iostream>

using namespace std;
TrabalhadorPorHora::TrabalhadorPorHora(){
}

TrabalhadorPorHora::~TrabalhadorPorHora(){
}


void TrabalhadorPorHora::calcularPagamentos(int horas){
	float v;
cout << "\nDigite o valor do pagamento a cada hora trabalhada no mes: " << endl;
cin >> v;

v *= horas;

if(horas > 40){
	v *= (20+ (horas/2) );
}

cout << "\nO valor do salario por " << horas << " horas trabalhadas eh: R$ " << v << endl;
}
