#include "Despesa.h"
#include "ControleDeGastos.h"
#include<iostream>
#include<string>
#include<cstring.h>

using namespace std;

int main() {
    ControleDeGastos controle[10];
    Despesa arrayDespesas[10];
    int n, i;
    float v;
    string tipo;  

    cout << "---- CONTROLE DE GASTOS ----\n";
    cout << "Quantas despesas deseja inserir? (maximo 10): ";
    cin >> n;

    for (i = 0; i < n; i++) {
        cout << "Despesa " << i + 1 << "\n";
        
        cout << "Valor: ";
        cin >> v;
        
        arrayDespesas[i].setValor(v);
        
        cout << "Tipo de despesa: ";
        cin >> tipo;
        
        arrayDespesas[i].setTipoDeGasto(tipo);
    }

    controle->setDespesas(arrayDespesas);
    
    cout << "Valor total das despesas: " << controle->calculaTotalDeDespesas() << "\n";

    return 0;
}
