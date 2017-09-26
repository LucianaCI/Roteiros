#ifndef OTORRINO_H
#define OTORRINO_H
#include "Medico.h"
#include <string>

using namespace std;

class Otorrino : public Medico{

private:
public:

	Otorrino();
	~Otorrino();

	Otorrino(string, float, float);
	void nomeDoCurso(string);
	void cirurgia();
	void atendimento();



};
#endif
