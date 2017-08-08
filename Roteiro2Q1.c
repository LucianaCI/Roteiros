#include<stdio.h>

int HoraMinuto( int h, int min){
	h -= 12;
	printf("%d : %d PM\n", h, min);

return 0;
}

int main(){
	

int hora, minuto;

scanf("%d %d", &hora, &minuto);

	if(hora > 24 || minuto > 59){
		return -1;
	}

	if(hora > 12){
		HoraMinuto(hora, minuto);
	}else{
		printf("%d : %d AM\n", hora, minuto);
	}

return 0;
}
