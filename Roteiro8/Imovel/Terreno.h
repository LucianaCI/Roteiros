#ifndef TERRENO_H
#define TERRENO_H

#include "Endereco.h"
#include "Imovel.h"

class Terreno : public Imovel{

protected:
	float area;
public:
	Terreno();
	virtual ~Terreno();

	string getDescricao();
};
#endif
