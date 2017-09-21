#include "Relogio.h"
#include <iostream>
using namespace std;

Relogio::Relogio(int hora, int minuto, int segundo){
	this-> hora = hora;
	this -> minuto = minuto;
	this -> segundo = segundo;
}

void Relogio::setHorario(int h, int min, int s){
	hora = h;
	minuto = min;
	segundo = s;

	if(segundo >= 60){
		segundo -= ((segundo/60)*60);
		minuto++;
	}
	if(minuto >= 60){
		minuto -= ((minuto/60)*60);
		hora++;
	}
 cout <<"\nO horario digitado foi = " <<  hora << ":" << minuto << ":" << segundo << "\n";
}

int Relogio::getHora(){
	return hora;
}
int Relogio::getMinuto(){
	return minuto;
}
int Relogio::getSegundo(){
	return segundo;
}
void Relogio::avancarHorario(int h, int min, int s){
	hora = h;
	minuto = min;
	segundo = s;

	segundo++;

 	if(segundo >= 60){
		segundo -= ((segundo/60)*60);
		minuto++;
	}
	if(minuto >= 60){
		minuto -= ((minuto/60)*60);
		hora++;
	}
cout << "\nO horario digitado acrescido de 1 segundo eh = " << hora << ":" << minuto << ":" << segundo << "\n"; 
}	
	



