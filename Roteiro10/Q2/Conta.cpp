#include "Conta.h"
#include <iostream>

using namespace std;

Conta::Conta() {

}

Conta::Conta(std::string nome, int numConta, double salario, double saldo)
{
    nomeCliente = nome;
    this->numConta = numConta;
    salarioMensal = salario;
    this->saldo = saldo;
    definirLimite();
}

Conta::~Conta()
{
    //dtor
}

void Conta::sacar(double valor) {
    if (saldo + limite >= valor)
        saldo = saldo - valor;
    else
        throw SaldoNaoDisponivelException(saldo+limite, valor);
}

void Conta::depositar(double valor) {
    saldo += valor;
}

void Conta::definirLimite() {
    limite = salarioMensal*2;
}

void Conta::exibe() {
    cout << nomeCliente << " " << numConta
         << " " << salarioMensal << " " << saldo << " " << limite << endl;
}
