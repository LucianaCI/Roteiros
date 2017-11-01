#ifndef SISTEMAGERENCIARFOLHA_H
#define SISTEMAGERENCIARFOLHA_H
#include "Funcionario.h"

class SistemaGerenciarFolha {

protected:
	Funcionario funcionarios[];
public:
	SistemaGerenciarFolha();
	virtual ~SistemaGerenciarFolha();

	void setFuncionarios(Funcionario*);
	double calculaValorTotalFolha();
	double consultaSalarioFuncionario();


};
#endif
