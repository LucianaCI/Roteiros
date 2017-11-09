#include "Funcionario.h"

Funcionario::Funcionario(){

}

Funcionario::~Funcionario(){

}

double Funcionario::calcularSalario() {///Parte1 importante para exception
    return salario;
}

void Funcionario::setNome(string n){
    nome = n;
}

string Funcionario::getNome(){
    return nome;
}

void Funcionario::setSalario(double s){
    salario = s;
}

void Funcionario::setMatricula(int m){
    matricula = m;
}

int Funcionario::getMatricula(){
    return matricula;
}

void Funcionario::setHora(double h){
    hora = h;
}

void Funcionario::setPercentual(double p){
    percentual = p;
}

void Funcionario::setValorDeVendas(double vdv){
    valorDeVendas = vdv;
}

double Funcionario::getHora(){
    return hora;
}

double Funcionario::getPercentual(){
    return percentual;
}

double Funcionario::getValorDeVendas(){
    return valorDeVendas;
}
