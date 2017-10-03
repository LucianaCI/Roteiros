#ifndef CASA_H
#define CASA_H

#include "Endereco.h"
#include "Imovel.h"
#include <string>

using namespace std;

class Casa : public Imovel{

protected:
	int numeroDePavimentos;
	int quantidadeDeQuartos;
	float areaDoTerreno;
	float areaConstruida;
public:
	string getDescricao();
	Casa();
	virtual ~Casa();
};
#endif
