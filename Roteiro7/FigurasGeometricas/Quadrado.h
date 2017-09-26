#ifndef QUADRADO_H
#define QUADRADO_H

#include "FigurasGeometricas.h"

class Quadrado : public FigurasGeometricas{

public:
	Quadrado();
	virtual ~Quadrado();
	float calcularArea();
};
#endif
