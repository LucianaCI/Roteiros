#include "Otorrino.h"
#include "Medico.h"
#include <string>
#include <iostream>

using namespace std;

Otorrino :: Otorrino(){
}

Otorrino :: ~Otorrino(){
}

Otorrino :: Otorrino(string no, float aot, float pot){

	cout << no << "   " <<  aot << " m  " << pot << "  kg" << endl;
}

void Otorrino :: nomeDoCurso(string profissaoot){
	cout << profissaoot << endl;
}

void Otorrino :: cirurgia(){
	cout << "\nEsse medico faz cirurgia";
}

void Otorrino :: atendimento(){
	cout << "\nEsse medico faz atendimento direcionado a problemas nasais, auriculares, etc\n\n\n";
}
