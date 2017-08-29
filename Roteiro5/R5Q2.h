#ifndef INVOICE_H
#define INVOICE_H

#include<iostream>
#include<string>
using namespace std;

class InVoice{

public:

int numero,quantidade;
float preco;
string descricao;

InVoice();
InVoice(int numero, string descricao, int quantidade, float preco);

	int getNumero();
	string getDescricao();
	int getQuantidade();
	float getPreco();
	void setNumero(int numero);
	void setDescricao(string descricao);
	void setQuantidade(int quantidade);
	void setPreco(float preco);

	float getInvoiceAmount();




};
#endif

