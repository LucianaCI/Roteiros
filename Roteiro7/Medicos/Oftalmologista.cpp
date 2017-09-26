#include "Oftalmologista.h"
#include "Medico.h"
#include <string>
#include <iostream>

using namespace std;

Oftalmologista :: Oftalmologista(){
}

Oftalmologista :: ~Oftalmologista(){
}

Oftalmologista :: Oftalmologista(string nof, float pof, float aof){

	cout << nof << "   " << aof << " m  " << pof << " kg" << endl;
}

void Oftalmologista :: nomeDoCurso(string profissaoof){
	cout << profissaoof << endl;
}

void Oftalmologista :: cirurgia(){
	cout << "\nEsse medico nao faz cirurgia";
}

void Oftalmologista :: atendimento(){
	cout << "\nEsse medico faz atendimento direcionado a problemas oculares\n\n\n";
}
