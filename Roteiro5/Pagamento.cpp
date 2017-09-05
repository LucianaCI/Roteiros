#include "Pagamento.h"
#include "ControleDePagamentos.h"
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

Pagamento::Pagamento(string nome, float pagamento) {
    this->nomeDoFuncionario = nome;
    this->valorPagamento = pagamento;
}

void Pagamento::setNome(string nome) {
    this->nomeDoFuncionario = nome;
}

string Pagamento::getNome() {
    return nomeDoFuncionario;
}
float Pagamento::getPagamento() {
    return valorPagamento;
}





