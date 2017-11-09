#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>
#include <iostream>

using namespace std;

class Funcionario {

protected:
    string nome;
    int matricula;
    double salario, hora, percentual, valorDeVendas;

public:
    Funcionario();
    virtual ~Funcionario();

    virtual void setNome(string n);
    virtual void setSalario(double s);
    virtual void setMatricula(int m);
    virtual void setHora(double h);
    virtual void setPercentual(double p);
    virtual void setValorDeVendas(double vdv);

    virtual double calcularSalario() = 0;
    virtual string getNome();
    virtual int getMatricula();
    virtual double getHora();
    virtual double getPercentual();
    virtual double getValorDeVendas();
};
#endif
