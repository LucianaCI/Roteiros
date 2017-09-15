#ifndef PEDIDO_H
#define PEDIDO_H

#include<string>
using namespace std;

class Pedido{

private:
	string numero;
	string descricao;
	int quantidade;
	float preco;
public:
	
	Pedido(string numero, string descricao, int quantidade, float preco);
	
};
#endif
