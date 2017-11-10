#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H
#include "Conta.h"

using namespace std;

class ContaEspecial: public Conta {

public:
    ContaEspecial();
    ContaEspecial(string nome, int numConta, double salario, double saldo);
    virtual ~ContaEspecial();
    virtual void definirLimite();
};
#endif 
