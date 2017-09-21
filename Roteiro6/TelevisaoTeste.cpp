#include "Televisao.h"
#include <iostream>

using namespace std;

int main(){

Televisao tv(0,0);
int vol, can;
char acao;

cout << "Canal de TV: ";
cin >> can;

tv.setCanal(can);

cout << "Volume da televisao: ";
cin >> vol;

tv.setVolume(vol);

cout << "\n\nO que deseja fazer?\nAumentar volume (+)\nDiminuir volume (-)\nMudar de canal para cima (1)\nMudar de canal para baixo(2)\nTrocar canal(3)\n\n";

while(1){
cin >> acao;

switch (acao){
	case '+' :
		tv.aumentarVolume();
		break;
	case '-':
		tv.diminuirVolume();
		break;
	case '1' :
		tv.aumentarCanal();
		break;
	case '2':
		tv.diminuirCanal();	
		break;
	case '3':
		cout << "Insira o novo canal: ";
		cin >> can;
		tv.trocarCanal(can);
		break;
	default:
		cout << "Comando invalido!\n";
		cout << "Voce esta assistindo o canal " << tv.getCanal() << " e a televisao esta no volume " << tv.getVolume() << "\n"; 
		return -1;
		break;
	}

}
return 0;	
}


