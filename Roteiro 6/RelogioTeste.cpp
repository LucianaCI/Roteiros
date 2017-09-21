#include "Relogio.h"
#include <iostream>

using namespace std;

int main(){

Relogio horario(1, 3 , 2);
int h, min, s;

cout << "---- HORARIO ----\n Digite a hora, os minutos e os segundos abaixo\n";
cout << "Hora: ";
cin >> h;
cout << "Minuto: ";
cin >> min;
cout << "Segundo: ";
cin >> s;

horario.setHorario(h, min, s);
horario.avancarHorario(h, min, s);

}


