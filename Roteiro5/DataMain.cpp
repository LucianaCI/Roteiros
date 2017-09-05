#include<iostream>
#include "Data.h"

using namespace std;

int main(){

Data d(21, 06, 1997);
int dia, mes, ano;

cout << "---- INSIRA UMA DATA ----\n";
cin >> dia >> mes >> ano;

d.setDia(dia);
d.setMes(mes);
d.setAno(ano);


	if(ano > 2017 || ano < 1900){
          cout << "O ano deve estar entre 1900 e 2017\n";
	}

	if(dia > 31){
	   dia -= 31;
	   mes++; 
		if(mes > 12){
		   mes -= 12; 
		   ano++;
		}
	}

cout << "A data inserida foi: ";
cout << d.getDia() << "/" << d.getMes() << "/" << d.getAno() << "\n";

d.avancarDia();

cout << "\nA data inserida avançada de 1 dia eh: ";
cout << d.getDia() << "/" << d.getMes() << "/" << d.getAno() << "\n";

return 0;
}
