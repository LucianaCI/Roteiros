#include "Endereco.h"

#include <iostream>
#include <string>

using namespace std;
Endereco::Endereco(){
}
Endereco::~Endereco(){
}

string Endereco::getLogradouro(){
	string endereco;
	cout << "\n----ENDERECO COMPLETO----\n";
	cout <<"\n\nDigite o endereco: ";
	cin >> endereco;
	cout << "\nO endereco eh: " << endereco;

return endereco;
}
string Endereco::getBairro(){
	string bairro;

	cout <<"\nDigite o bairro: ";
	cin >> bairro;
	cout << "\nO bairro eh: " << bairro;

return bairro;
}
int Endereco::getNumero(){
	int n;
	
	cout << "\nDigite o numero: ";
	cin >> n;
	cout << "\nO numero eh: " << n;
return n;
}
string Endereco::getCidade(){
	string cidade;

	cout<<"\nDigite a cidade: ";
	cin >> cidade;
	cout << "\nA cidade eh: " << cidade;

return cidade;
}
string Endereco::getCep(){
	string Cep;

	cout<<"\nDigite o Cep: ";
	cin >> Cep;
	cout << "\nO Cep eh: " << Cep;

return Cep;
}

