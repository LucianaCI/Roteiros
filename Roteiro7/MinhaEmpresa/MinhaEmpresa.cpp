#include "Funcionario.h"
#include "Consultor.h"
#include <iostream>
#include <string>

using namespace std;

int main(){

Funcionario *funcionarios[3];

cout << "----INFORMACOES DOS FUNCIONARIOS----\n";

funcionarios[0] = new Consultor();
Consultor("Carlos", 123, 1000);
funcionarios[0]->setSalario(1000);
funcionarios[0]->getSalario();

funcionarios[1] = new Consultor();
Consultor("Patricia", 456, 2000);


funcionarios[2] = new Consultor();
Consultor("Lua", 789, 1500);











}
