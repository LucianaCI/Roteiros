#include "ContaEspecial.h"
#include "Conta.h"

#include <iostream>
using namespace std;

ContaEspecial::ContaEspecial(string nome, float salario, int numero, float saldo){
	cout << "\nCliente: " << nome << endl;
}
ContaEspecial::~ContaEspecial(){
}
ContaEspecial::ContaEspecial(){
}

void ContaEspecial::definirLimite(float smensal){
	float limite;	
	limite = smensal*3;
cout << "\nSeu limite eh: R$ " << limite << endl;

}
