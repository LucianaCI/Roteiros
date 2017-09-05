#include "ControleDeGastos.h"
#include "Despesa.h"
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

long ControleDeGastos::calculaTotalDeDespesas(){
    double total = 0;
    for(int i = 0; i < strlen(despesas.getValor()); i++){
        total += despesas[i].getValor();
    }
    return total;
}

void ControleDeGastos::setDespesas(Despesa despesas[]){
        despesas = despesas[];
}
bool ControleDeGastos::existeDespesaDoTipo(string tipoDeGasto){
    for(int i = 0; i < strlen(despesas.getTipoDeGasto()); i++){
        if(tipoDeGasto == despesas[i].getTipoDeGasto()){
            return true;
        }
    }
    return false;
}
