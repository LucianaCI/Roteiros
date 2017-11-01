#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>
using namespace std;

class Funcionario{

protected:
	string nome;
	int matricula;
public:
	Funcionario();
	virtual ~Funcionario();	

	void setNome(string);
	void setMatricula(int);
	string getNome();
	int getMatricula();

	virtual double calculaSalario();

};
#endif
