#ifndef HORISTA_H
#define HORISTA_H
#include "Funcionario.h"

class Horista : public Funcionario{

protected:
	double salarioPorHora;
	double horasTrabalhadas;	
public:
	Horista();
	virtual ~Horista();

	double calcularSalario();
};
#endif

