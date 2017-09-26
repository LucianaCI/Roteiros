#ifndef MEDICO_H
#define MEDICO_H

#include<string>

using namespace std;

class Medico{

protected:
	string nome;
	float altura;
	float peso;
public:
	Medico(string, float, float);
	Medico();
	virtual ~Medico();
	virtual	void nomeDoCurso(string);
	virtual void cirurgia();
	virtual void atendimento();

};
#endif
