#include "Trabalhador.h"
#include"TrabalhadorPorHora.h"
#include"TrabalhadorAssalariado.h"
#include <iostream>

using namespace std;

int main(){

Trabalhador *trabalhadores[2];

trabalhadores[0] = new Trabalhador("Seu Zé");
trabalhadores[0] = new TrabalhadorPorHora();
trabalhadores[0] -> calcularPagamentos(62);

trabalhadores[1] = new Trabalhador("Dona Francisquinha");
trabalhadores[1] = new TrabalhadorAssalariado();
trabalhadores[1] -> calcularPagamentos(90);




return 0;
}
