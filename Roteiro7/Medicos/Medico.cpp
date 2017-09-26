#include "Medico.h"

#include<string>
#include<iostream>

using namespace std;

Medico::Medico(string nome, float peso, float altura){
	this -> nome = nome;
	this -> peso = peso;
	this -> altura = altura;
cout << nome << "\n" << peso << "kg\n" << altura << "m\n\n";

}

Medico::Medico(){
}
Medico::~Medico(){
}

void Medico::nomeDoCurso(string curso){

cout << curso << endl;

}

void Medico::cirurgia(){
	cout << "----CIRURGIA----\n\n";
}
void Medico::atendimento(){
	cout << "----ATENDIMENTO----\n\n";
}
