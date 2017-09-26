#include "Cirurgiao.h"
#include "Medico.h"
#include <string>
#include <iostream>

using namespace std;

Cirurgiao :: Cirurgiao(){
}

Cirurgiao :: ~Cirurgiao(){
}

Cirurgiao :: Cirurgiao(string nc, float pc, float ac){

	cout << nc << "   " <<  ac << " m  " << pc << " kg" << endl;
}

void Cirurgiao :: nomeDoCurso(string profissao){
	cout << profissao << endl;
}

void Cirurgiao :: cirurgia(){
	cout << "\nEsse medico faz cirurgia";
}

void Cirurgiao :: atendimento(){
	cout << "\nEsse medico nao faz atendimento, apenas cirurgias\n\n\n";
}
