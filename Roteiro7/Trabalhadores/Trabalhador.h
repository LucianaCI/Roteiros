#ifndef TRABALHADOR_H
#define TRABALHADOR_H

#include <string>

using namespace std;


class Trabalhador{

protected:
	string nome;
	float salarioMensal;

public:

	Trabalhador();
	~Trabalhador();
	
	Trabalhador(string);
	virtual void calcularPagamentos(int);


};
#endif
