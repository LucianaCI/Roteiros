#ifndef CIRURGIAO_H
#define CIRURGIAO_H
#include "Medico.h"
#include <string>

using namespace std;

class Cirurgiao : public Medico{

private:
public:

	Cirurgiao();
	~Cirurgiao();

	Cirurgiao(string, float, float);
	void nomeDoCurso(string);
	void cirurgia();
	void atendimento();



};
#endif
