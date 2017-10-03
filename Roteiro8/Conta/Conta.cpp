#include "Conta.h"
#include "IConta.h"
#include <string>
#include <iostream>

using namespace std;

Conta::Conta(string nome, float salario, int numero, float saldo){
	nomeCliente = nome;
	salarioMensal = salario;
	numeroConta = numero;
	this-> saldo = saldo;
cout << "\nCliente: " << nome << endl;
}
Conta::Conta(){
}
Conta::~Conta(){

}
void Conta::sacar(double valor){
	float saldo;	

	this->saldo = saldo;

	saldo -= valor;
cout << "\nVoce sacou R$ " << valor << endl;
}
void Conta::depositar(double valoR){
	float saldo;
	this -> saldo = saldo;

	saldo += valoR;
cout << "\nVoce depositou R$ " << valoR << endl;
}
void Conta::setNomeCliente(string n){
	nomeCliente = n;
}
void Conta::setSalarioMensal(float s){
	salarioMensal = s;
}
void Conta::setNumeroConta(int n){
	numeroConta = n;
}
void Conta::setSaldo(float saldo){
	this->saldo = saldo;
}
void Conta::setLimite(float l){
	limite = l;
}
string Conta::getNomeCliente(){
	return nomeCliente;
}
float Conta::getSalarioMensal(){
	return salarioMensal;
}
int Conta::getNumeroConta(){
	return numeroConta;
}
float Conta::getSaldo(){
	return saldo;
}
float Conta::getLimites(){
	return limite;
}

void Conta::definirLimite(float sm){
	float limite;
	this->limite = limite;
	salarioMensal = sm;

	limite = 2*sm;
cout << "\nSeu limite eh: R$ " << limite << endl;
}
