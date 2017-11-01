#ifndef COMISSIONADO_H
#define COMISSIONADO_H

#include "Funcionario.h"

class Comissionado : public Funcionario{

protected:
	double vendasSemanais;
	double percentualComissao;
public:
 	Comissionado();
	~Comissionado();
	
	double calcularSalario();

};
#endif
