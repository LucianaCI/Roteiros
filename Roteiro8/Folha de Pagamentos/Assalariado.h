#ifndef ASSALARIADO_H
#define ASSALARIADO_H


#include "Funcionario.h"

class Assalariado : public Funcionario{

protected:
    double salario;
    int matricula;
    string nome;

public:

    Assalariado();
    virtual ~Assalariado();

    void setNome(string n);
    void setSalario(double s);
    void setMatricula(int m);

    double calcularSalario();
    string getNome();
    int getMatricula();
};


#endif
