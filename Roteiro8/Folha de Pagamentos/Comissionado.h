#ifndef COMISSIONADO_H
#define COMISSIONADO_H


#include "Funcionario.h"

class Comissionado : public Funcionario{

protected:
    double salario, percentual, valorDeVendas;
    int matricula;
    string nome;

public:

    Comissionado();
    virtual ~Comissionado();
    
    void setNome(string n);
    void setSalario(double s);
    void setMatricula(int m);
    void setPercentual(double p);
    void setValorDeVendas(double vdv);

    
    double calcularSalario();
    string getNome();
    int getMatricula();
    double getPercentual();
    double getValorDeVendas();

};
#endif
