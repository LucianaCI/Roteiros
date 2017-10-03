#ifndef CONTA_H
#define CONTA_H

#include "IConta.h"
#include<string>

using namespace std;

class Conta: public IConta{

protected:
	string nomeCliente;
	float salarioMensal;
	int numeroConta;
	float saldo;
	float limite;
public:
	
	void sacar(double);
	void depositar(double);

	void setNomeCliente(string);
	void setSalarioMensal(float);
	void setNumeroConta(int);
	void setSaldo(float);
	void setLimite(float);


	string getNomeCliente();
	float getSalarioMensal();
	int getNumeroConta();
	float getSaldo();
	float getLimites();

	virtual void definirLimite(float);
	Conta();
	Conta(string, float, int, float);
	~Conta();

};
#endif
