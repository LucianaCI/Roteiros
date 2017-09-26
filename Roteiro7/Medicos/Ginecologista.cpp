#include "Ginecologista.h"
#include "Medico.h"
#include <string>
#include <iostream>

using namespace std;

Ginecologista :: Ginecologista(){
}

Ginecologista :: ~Ginecologista(){
}

Ginecologista :: Ginecologista(string ng, float pg, float ag){


	cout << ng << "   " <<  ag << " m  " << pg << " kg" << endl;
}


void Ginecologista :: nomeDoCurso(string c){
	cout << c << endl;
}

void Ginecologista :: cirurgia(){
	cout << "\nEsse medico nao faz cirurgia";
}

void Ginecologista :: atendimento(){
	cout << "\nEsse medico faz atendimento direcionado a mulheres\n\n\n";
}
