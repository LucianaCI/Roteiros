
#ifndef DESPESA_H
#define DESPESA_H

#include <string>
#include <cstring>
#include <iostream>

using namespace std;

class Despesa {
public:
    double valor;
    string tipoDeGasto;

    Despesa(double valor, string tipoDeGasto);

    double getValor();
    string getTipoDeGasto();
    void setValor(double valor);
    void setTipoDeGasto(string tipoDeGasto);

};

class ControleDeGastos{
public:
    Despesa despesas[];

    int i;

    void setDespesas(Despesa despesas[]);

    long calculaTotalDeDespesas();

    bool existeDespesaDoTipo(string tipoDeGasto);

};
#endif
