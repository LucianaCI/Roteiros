#ifndef CONTROLEDEGASTOS_H
#define CONTROLEDEGASTOS_H
#include "Despesa.h"



class ControleDeGastos{
private:
    Despesa despesas[];

public:

    void setDespesas(Despesa despesas[]);

    long calculaTotalDeDespesas();

    bool existeDespesaDoTipo(string tipoDeGasto);

};

#endif
