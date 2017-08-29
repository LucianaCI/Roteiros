#include<iostream>
#include "R5Q1.h"

using namespace std;

int main(){

MinhaData d(21, 06, 1997);

cout << "---- INSIRA UMA DATA ----\n";
cin >> d.dia >> d.mes >> d.ano;

	if(d.ano > 2017 || d.ano < 1900){
          cout << "O ano deve estar entre 1900 e 2017\n";
	}

	if(d.dia > 31){
	   d.dia -= 31;
	   d.mes++; 
		if(d.mes > 12){
		   d.mes -= 12; 
		   d.ano++;
		}
	}

cout << "A data inserida foi: ";
cout << d.getDia() << "/" << d.getMes() << "/" << d.getAno() << "\n";

d.avancarDia();

cout << "\nA data inserida avançada de 1 dia eh: ";
cout << d.getDia() << "/" << d.getMes() << "/" << d.getAno() << "\n";

return 0;
}
