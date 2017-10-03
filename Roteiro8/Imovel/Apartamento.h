#ifndef APARTAMENTO_H
#define APARTAMENTO_H

#include "Endereco.h"
#include "Imovel.h"
#include <string>

using namespace std;

class Apartamento : public Imovel{

protected:
	string posicao;
	double valorDoCondominio;
	int numeroDeVagasNaGaragem;
public:
	Apartamento();
	virtual ~Apartamento();
	
	string getDescricao();


};
#endif
