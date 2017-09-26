#ifndef OFTALMOLOGISTA_H
#define OFTALMOLOGISTA_H
#include "Medico.h"
#include <string>

using namespace std;

class Oftalmologista : public Medico{

private:
public:

	Oftalmologista();
	~Oftalmologista();

	Oftalmologista(string, float, float);
	void nomeDoCurso(string);
	void cirurgia();
	void atendimento();



};
#endif
