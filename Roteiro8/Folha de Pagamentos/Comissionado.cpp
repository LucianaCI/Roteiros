#include "Comissionado.h"

Comissionado::Comissionado(){
    cout << "\n---Comissionado---\n";
}

Comissionado::~Comissionado(){

}

void Comissionado::setNome(string n){
    nome = n;
}

void Comissionado::setSalario(double s){
    salario = s;
}

void Comissionado::setMatricula(int m){
    matricula = m;
}

double Comissionado::calcularSalario(){
    return 4*salario + percentual*valorDeVendas;
}

string Comissionado::getNome(){
    return nome;
}

int Comissionado::getMatricula(){
    return matricula;
}

void Comissionado::setPercentual(double p){
    percentual = p;
}

void Comissionado::setValorDeVendas(double vdv){
    valorDeVendas = vdv;
}

double Comissionado::getPercentual(){
    return percentual;
}

double Comissionado::getValorDeVendas(){
    return valorDeVendas;
}
