#include "Assalariado.h"

Assalariado::Assalariado(){
    cout << "\n---Assalariado---\n";

    //salario = s;
}

Assalariado::~Assalariado(){

}

void Assalariado::setNome(string n){
    nome = n;
}

void Assalariado::setSalario(double s){
    salario = s;
}

void Assalariado::setMatricula(int m){
    matricula = m;
}

double Assalariado::calcularSalario(){
    return 4*salario;
}

string Assalariado::getNome(){
    return nome;
}

int Assalariado::getMatricula(){
    return matricula;
}
