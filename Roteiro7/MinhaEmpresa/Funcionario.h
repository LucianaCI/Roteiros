#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>

using namespace std;

class Funcionario{

protected:
	string nome;
	int matricula;
	float salario;
public:
	void setNome(string);
	void setMatricula(int);
	void setSalario(float);

	string getNome();
	int getMatricula();
	virtual float getSalario();

	Funcionario();
	~Funcionario();

};
#endif
