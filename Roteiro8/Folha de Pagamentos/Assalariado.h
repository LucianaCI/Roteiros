#ifndef ASSALARIADO_H
#define ASSALARIADO_H
#include "Funcionario.h"

class Assalariado : public Funcionario{

protected:
	double salario;
public:
	Assalariado();
	virtual ~Assalariado();
	double calcularSalario();

};
#endif
