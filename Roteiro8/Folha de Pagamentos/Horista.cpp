#include "Horistas.h"
#include "Funcionario.h" 
#include <iostream>

using namespace std;

Horista::Horista(){
}
Horista::~Horista(){
}
double Horista::calcularSalario(){
	int horas;

	cout << "\nDigite o numero de horas trabalhadas: ";
	cin >> horas;
	cout << "Digite a taxa de salario por hora: ";
	cin >> salarioPorHora;
	if(horas > 40){
		salarioPorHora = 40*salarioPorHora + (1.5*(horas-40)*salarioPorHora);	
	}

	cout << "\nO salario total eh: R$ " << salarioPorHora;
return salarioPorHora;
}
