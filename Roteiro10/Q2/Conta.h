#ifndef CONTA_H
#define CONTA_H

#include <string>
#include "SaldoNaoDisponivelException.h"

using namespace std;

class Conta {
public:
    Conta();
    Conta(string nome, int numConta, double salario, double saldo);
    virtual ~Conta();
    virtual void sacar(double valor);
    virtual void depositar(double valor);
    virtual void definirLimite();
    void exibe();
protected:
    string nomeCliente;
    int numConta;
    double salarioMensal;
    double limite;
    double saldo;
};
#endif
