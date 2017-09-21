#ifndef PEDIDO_H
#define PEDIDO_H

#include <string>

using namespace std;

class Pedido{

private:
	int numero, quantidade;
	string descricao;
	double preco;
	
public:
	Pedido();
	virtual ~Pedido();
	int getNumero();
	int getQuantidade();
	string getDescricao();
	double getPreco();

	void setNumero(int);
	void setQuantidade(int);
	void setDescricao(string);
	void setPreco(double);


};
 #endif
