#include "Assalariado.h"
#include "Funcionario.h"
#include <iostream>
using namespace std;

Assalariado::Assalariado(){
}
Assalariado::~Assalariado(){
}

double Assalariado::calcularSalario(){
        double salario;

	cout << "\nDigite o valor do seu salario fixo: ";
	cin >> salario;
	
	return salario;
}
