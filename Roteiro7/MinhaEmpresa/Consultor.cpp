#include "Funcionario.h"
#include "Consultor.h"
#include <string>
#include <iostream>

using namespace std;

Consultor :: Consultor(){
}
Consultor :: ~Consultor(){
}

float Consultor::getSalario(){
	cout << "Seu salario com 10% de acrescimo eh: " << salario*1.1 << endl;
	return salario*1.1;
}

float Consultor::getSalario(float percentual){
	salario *= (1+percentual);
	cout << "Seu salario acrescido de " << percentual << " eh: ";
	return salario; 
}

Consultor::Consultor(string n, int m, float s){
	cout << "\n\n" << n << "\nMatricula: " << m << "\nSalario: " << s << endl;
}
