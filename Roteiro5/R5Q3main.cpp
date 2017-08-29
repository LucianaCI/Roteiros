#include "R5Q3.h"
#include<string>
#include<iostream>


using namespace std;

int main(){

Empregado fulano("", "", 1000);

cout << "---- DIGITE O SEU NOME COMPLETO E SEU SALARIO MENSAL ----\n";
cin >> fulano.nome >> fulano.sobrenome >> fulano.salario;

if(fulano.salario < 0){
	cout << "\nSALARIO INVALIDO!\n";
}

cout << "Seu salario anual eh: " << fulano.salario * 12 << "\n";

cout << "Seu salario anual com aumento de 10%% eh: " << fulano.salario * 13.2 << "\n";

return 0;
}
