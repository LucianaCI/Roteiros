#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "FigurasGeometricas.h"

class Triangulo : public FigurasGeometricas{

public:
	Triangulo();
	virtual ~Triangulo();
	float calcularArea();


};
#endif

