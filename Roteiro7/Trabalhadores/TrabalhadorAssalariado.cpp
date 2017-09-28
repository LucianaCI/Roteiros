#include "Trabalhador.h"
#include "TrabalhadorAssalariado.h"
#include <iostream>

using namespace std;

TrabalhadorAssalariado::TrabalhadorAssalariado(){
}

TrabalhadorAssalariado::~TrabalhadorAssalariado(){
}

void TrabalhadorAssalariado::calcularPagamentos(int h){
	float valor;
cout << "\nDigite o valor do pagamento a cada 40 horas trabalhadas: "<< endl;
cin >> valor;
cout << "\nO salario mensal eh: " << valor << endl;
}
