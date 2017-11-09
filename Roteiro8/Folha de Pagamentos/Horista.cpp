#include "Horista.h"

Horista::Horista(){
    cout << "\n---Horista---\n";
}

Horista::~Horista(){

}
void Horista::setNome(string n){
    nome = n;
}

void Horista::setSalario(double s){
    salario = s;
}

void Horista::setMatricula(int m){
    matricula = m;
}

string Horista::getNome(){
    return nome;
}

int Horista::getMatricula(){
    return matricula;
}

double Horista::getHora(){
    return hora;
}

void Horista::setHora(double h){
    hora = h;
}

double Horista::calcularSalario(){//suponha que sempre possui a carga horaria completa
    double extra;

    extra = hora - 40;

    if(hora > 40){
        return 4*salario + 6*extra;
    } else if(hora <= 40 && hora > 0) {
        return 4 * salario;
    } else{
        return 0;
    }
}
