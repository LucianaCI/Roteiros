#include "R5Q1.h"

using namespace std;

MinhaData::MinhaData(){
	dia = 3;
	mes = 9;
	ano = 2016;
}

MinhaData::MinhaData(int dia, int mes, int ano){
    this->dia = dia;
    this->mes = mes;
    this->ano = ano;

}

int MinhaData::getDia(){
	return dia;
}
int MinhaData::getMes(){
	return mes;
}
int MinhaData::getAno(){
	return ano;
}
void MinhaData::setDia(int dia){
        this->dia = dia;

}
void MinhaData::setMes(int mes){
        this->mes = mes;

}
void MinhaData::setAno(int ano){
        this->ano = ano;
} 
void MinhaData::avancarDia(){
        dia++;
        
}













