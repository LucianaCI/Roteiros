#include "R5Q3.h"
#include<string>

using namespace std;

Empregado::Empregado(){
	
	nome = "";
	sobrenome = "";
	salario = 1000;
}


Empregado::Empregado(string nome, string sobrenome, float salario){
	this->nome = nome;
	this->sobrenome = sobrenome;
	this->salario = salario;
}

string Empregado::getNome(){
	return nome;
}
string Empregado::getSobrenome(){
	return sobrenome;
}
float Empregado::getSalario(){
	return salario;
}
void Empregado::setNome(string nome){
        this->nome = nome;
}
void Empregado::setSobrenome(string sobrenome){
        this->sobrenome = sobrenome;
}
void Empregado::setSalario(float Salario){
        this->salario = salario;
} 

