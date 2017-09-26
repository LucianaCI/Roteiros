#include "Medico.h"
#include "Ginecologista.h"
#include "Cirurgiao.h"
#include "Oftalmologista.h"
#include "Otorrino.h"

#include <iostream>
#include <string>

using namespace std;

int main(){

Medico *medicos[4];

cout << "----MEDICOS DISPONIVEIS----" << endl;

medicos[0] = new Ginecologista();
medicos[0] -> nomeDoCurso("----Ginecologista----");
Ginecologista("Joao Paulo Medeiros", 82, 1.87);
medicos[0] ->cirurgia();
medicos[0] ->atendimento();


medicos[1] = new Cirurgiao();
medicos[1] -> nomeDoCurso("----Cirurgiao----"); 
Cirurgiao("Carlos Souza", 93, 1.62);
medicos[1] ->cirurgia();
medicos[1] ->atendimento();


medicos[2] = new Oftalmologista();
medicos[2] -> nomeDoCurso("----Oftalmologista----");
Oftalmologista("Paula Soares", 70, 1.71);
medicos[2] ->cirurgia();
medicos[2] ->atendimento();


medicos[3] = new Otorrino();
medicos[3] -> nomeDoCurso("----Otorrino----");
Otorrino("Marina Parente", 69, 1.55);
medicos[3] ->cirurgia();
medicos[3] ->atendimento();



}
