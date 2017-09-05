#include "Empregado.h"
#include<string>
#include<iostream>


using namespace std;

int main(){

Empregado fulano;
string nome, sob;
float sal;

cout << "---- DIGITE O SEU NOME COMPLETO E SEU SALARIO MENSAL ----\n";
cin >> nome >> sob >> sal;

fulano.setNome(nome);
fulano.setSobrenome(sob);
fulano.setSalario(sal);

if(sal < 0){
	cout << "\nSALARIO INVALIDO!\n";
}

cout << "Seu salario anual eh: " << sal * 12 << "\n";

cout << "Seu salario anual com aumento de 10% eh: " << sal * 13.2 << "\n";

return 0;
}
