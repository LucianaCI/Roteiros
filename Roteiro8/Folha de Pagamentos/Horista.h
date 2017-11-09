#ifndef HORISTA_H
#define HORISTA_H

#include "Funcionario.h"

class Horista : public Funcionario{

protected:
    double salario, hora;

public:

    Horista();
    virtual ~Horista();

    void setNome(string n);
    void setSalario(double s);
    void setMatricula(int m);
    void setHora(double h);

    double calcularSalario();
    string getNome();
    int getMatricula();
    double getHora();


};
#endif
