#include "InVoice.h"
#include<string>


using namespace std;

InVoice::InVoice(){
	numero = 21;
	descricao = "acai";
	quantidade = 3;
	preco = 50;

}

InVoice::InVoice(int numero, string descricao, int quantidade, float preco){
	this-> numero = numero;
	this-> descricao = descricao;
	this-> quantidade = quantidade;
	this-> preco = preco;
}

float fatura;

int InVoice::getNumero(){
	return numero;
}
string InVoice::getDescricao(){
	return descricao;
}
int InVoice::getQuantidade(){
	return quantidade;
}
float InVoice::getPreco(){
	return preco;
}
void InVoice::setNumero(int numero){
        this->numero = numero;
}
void InVoice::setDescricao(string descricao){
        this->descricao = descricao;
}
void InVoice::setQuantidade(int quantidade){
        this->quantidade = quantidade;
} 
void InVoice::setPreco(float preco){
        this->preco = preco;
} 

float InVoice::getInvoiceAmount(){
	
	return (preco*quantidade);
}










