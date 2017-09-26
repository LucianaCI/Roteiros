#include "Funcionario.h"
#include <iostream>
#include <string>

using namespace std;

Funcionario :: Funcionario(){
}
Funcionario :: ~Funcionario(){
}

void Funcionario::setNome(string nome){
	this-> nome = nome; 
}
void Funcionario::setMatricula(int matricula){
	this-> matricula = matricula;
}
void Funcionario::setSalario(float salario){
	this-> salario = salario;
}

string Funcionario::getNome(){
	return nome;
}
int Funcionario::getMatricula(){
	return matricula;
}
float Funcionario::getSalario(){
	return salario;
}
