#include "Despesa.h"
#include <iostream>
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




