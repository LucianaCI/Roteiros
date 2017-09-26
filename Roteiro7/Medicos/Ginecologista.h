#ifndef GINECOLOGISTA_H
#define GINECOLOGISTA_H
#include "Medico.h"
#include <string>

using namespace std;

class Ginecologista : public Medico{

private:
public:

	Ginecologista();
	~Ginecologista();

	Ginecologista(string, float, float);
	void nomeDoCurso(string);
	void cirurgia();
	void atendimento();



};
#endif
