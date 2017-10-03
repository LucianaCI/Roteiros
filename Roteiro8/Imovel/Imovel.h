#ifndef IMOVEL_H
#define IMOVEL_H

#include "Endereco.h"
#include <string>

using namespace std;

class Imovel : public Endereco{

protected:
	Endereco end;
public:

	Imovel();
	virtual ~Imovel();
	Endereco getEndereco();
	virtual string getDescricao();


};
#endif
