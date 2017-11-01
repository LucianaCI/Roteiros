#include "Funcionario.h"
#include <string>
#include <iostream>

using namespace std;

Funcionario::Funcionario(){
}
Funcionario::~Funcionario(){
}
void Funcionario::setNome(string nome){
	this->nome = nome;
}
void Funcionario::setMatricula(int matricula){
	this->matricula = matricula;
}
string Funcionario::getNome(){
	return nome;
}
int Funcionario::getMatricula(){
	return matricula;
}
double Funcionario::calculaSalario(){
	double salario;
	return salario;
}
