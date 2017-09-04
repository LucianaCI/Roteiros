#include "R5Q5.h"
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

Despesa::Despesa(double valor, string tipoDeGasto) {
    this->tipoDeGasto = tipoDeGasto;
    this->valor = valor;
}
double Despesa::getValor(){
    return valor;
}
string Despesa::getTipoDeGasto(){
    return tipoDeGasto;
}
void Despesa::setValor(double valor){
    this->valor = valor;
}
void Despesa::setTipoDeGasto(string tipoDeGasto){
    this->tipoDeGasto = tipoDeGasto;
}

long ControleDeGastos::calculaTotalDeDespesas(){
    double total = 0;
    for(i = 0; i < strlen(despesas); i++){
        total += despesas[i].getValor();
    }
    return total;
}

void ControleDeGastos::setDespesas(Despesa despesas[]){
        this->despesas = despesas;
}
bool ControleDeGastos::existeDespesaDoTipo(string tipoDeGasto){
    for(i = 0; i < strlen(despesas); i++){
        if(tipoDeGasto == despesas[i].getTipoDeGasto()){
            return true;
        }
    }
    return false;
}

int main() {
    ControleDeGastos controle[10];
    Despesa arrayDespesas[10];
    int n, i;

    cout << "---- CONTROLE DE GASTOS ----\n";
    cout << "Quantas despesas deseja inserir? (maximo 10): ";
    cin >> n;

    for (i = 0; i < n; i++) {
        cout << "Despesa " << i + 1 << "\n";
        cout << "Valor: ";
        cin >> arrayDespesas[i].valor;
        cout << "Tipo de despesa: ";
        cin >> arrayDespesas[i].tipoDeGasto;
    }

    controle->setDespesas(arrayDespesas);
    cout << "Valor total das despesas: " << controle->calculaTotalDeDespesas() << "\n";

    return 0;
}
