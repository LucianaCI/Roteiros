#ifndef TESTAVALIDANUMERO_H
#define TESTAVALIDANUMERO_H

#include <iostream>
#include "ValorAbaixoException.h"

using namespace std;

class TestaValidaNumero {

protected:
    int numero;

public:

    TestaValidaNumero();
    virtual ~TestaValidaNumero();

    void validaNumero(int);
    int getValidaNumero();
};
#endif
