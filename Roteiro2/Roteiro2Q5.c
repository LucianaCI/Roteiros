#include<stdio.h>

int main(){

int i, cont1, cont2, total;
float altura[10], maioraltura, menoraltura, mediaf, mediam ;
char sexo[10], maiorsexo, menorsexo;

maioraltura = 0;
menoraltura = 10;
cont1 = 0;
cont2 = 0;
mediaf = 0;
mediam = 0;
 
for(i = 0; i<10; i++){
	scanf("%f %c", &altura[i], &sexo[i]);

	if(sexo[i] == 'f'){
		cont1++;
		mediaf += altura[i];
	}else{
		cont2++;
		mediam += altura[i];
	}

	if(altura[i] > maioraltura){
		maioraltura = altura[i];
		maiorsexo = sexo[i];
	}
	
	if(altura[i] < menoraltura){
		menoraltura = altura[i];
		menorsexo = sexo[i];
	}else{
		continue;
	}	
}

total = (cont1+cont2);
mediaf /= 10;
mediam /= 10;

printf("NUMERO TOTAL DE INDIVIDUOS: %d\n", total);

printf("MAIOR ALTURA: %.2f (%c)\nMENOR ALTURA: %.2f (%c)\n", maioraltura, maiorsexo, menoraltura, menorsexo);


printf("MEDIA DE ALTURAS\nF : %f\nM : %f\n", mediaf, mediam);


	

return 0;
}

