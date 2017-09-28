#ifndef TRABALHADORASSALARIADO_H
#define TRABALHADORASSALARIADO_H

#include "Trabalhador.h"

class TrabalhadorAssalariado : public Trabalhador{

public:
	void calcularPagamentos(int);

	TrabalhadorAssalariado();
	~TrabalhadorAssalariado();
};
#endif
