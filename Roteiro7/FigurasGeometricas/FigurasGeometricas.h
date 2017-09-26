#ifndef FIGURASGEOMETRICAS_H
#define FIGURASGEOMETRICAS_H

#include<string>

using namespace std;

class FigurasGeometricas{

private:
	string nome;
public:
	FigurasGeometricas();
	virtual~FigurasGeometricas();
	virtual float calcularArea();
};
#endif
