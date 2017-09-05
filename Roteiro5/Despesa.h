
#ifndef DESPESA_H
#define DESPESA_H

#include <string>
#include <cstring>
#include <iostream>

using namespace std;

class Despesa {
private:
    double valor;
    string tipoDeGasto;
public:
    Despesa(double valor, string tipoDeGasto);

    double getValor();
    string getTipoDeGasto();
    void setValor(double valor);
    void setTipoDeGasto(string tipoDeGasto);

};

#endif
