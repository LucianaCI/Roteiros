#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H

#include "Conta.h"

class ContaEspecial : public Conta{

public:

	void definirLimite(float);

	ContaEspecial(string, float, int, float);
	ContaEspecial();
	~ContaEspecial();
};
#endif
