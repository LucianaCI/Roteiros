#include "Comissionado.h"
#include "Funcionario.h"

#include <iostream>
using namespace std;

Comissionado::Comissionado(){
}
Comissionado::~Comissionado(){
}

double Comissionado::calcularSalario(){
		double base;
	cout << "\nDigite a quantidade de venda  na semana: ";
	cin >> vendasSemanais;
	cout << "\nDigite o salario base: ";
	cin >> base;
	cout << "\nDigite o percentual adicionado as vendas: ";
	cin >> percentualComissao;
base += (vendasSemanais*percentualComissao);

	cout << "\nO salario total de 4 semanas eh : R$ " << base;

return base;
}
