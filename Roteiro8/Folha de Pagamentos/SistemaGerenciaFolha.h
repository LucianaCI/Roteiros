#ifndef SISTEMAGERENCIAFOLHA_H
#define SISTEMAGERENCIAFOLHA_H

#include "Horista.h"
#include "Comissionado.h"
#include "Assalariado.h"
#include "Funcionario.h"

class SistemaGerenciaFolha {

protected:
    Funcionario *f[25];
    int tb, indice, matricula;
    string nome;
    double salario, hora, percentual, valorDeVendas;

public:

    SistemaGerenciaFolha();
    virtual ~SistemaGerenciaFolha();

    void setFuncionario(int tb);
    double calculaValorTotalFolha();
    double consultaSalarioFuncionario(int indice);
};
#endif
