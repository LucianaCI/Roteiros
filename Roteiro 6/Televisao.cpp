#include "Televisao.h"
#include <iostream>
using namespace std;

Televisao::Televisao(int volume, int canal){
	this-> volume = volume;
	this -> canal = canal;
}

void Televisao::setVolume(int vol){
	volume = vol;
}
void Televisao::setCanal(int can){
	canal = can;
}
int Televisao::getVolume(){
	return volume;
}
int Televisao::getCanal(){
	return canal;
}
int Televisao::aumentarVolume(){
	return volume++;
}
int Televisao::diminuirVolume(){
	return volume--;
}
int Televisao::aumentarCanal(){
	return canal++; 
}	
int Televisao::diminuirCanal(){
	return canal--;
}
void Televisao::trocarCanal(int canal){
	this -> canal = canal;
}	



