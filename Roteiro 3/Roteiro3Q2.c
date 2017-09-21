#include<stdio.h>
#include<string.h>

int main(){

char nome[50];
int i, j;

printf("Digite um nome: ");
scanf("%s", nome);

for (i=0; nome[i]!='\0'; i++) {
	for (j=0; j<=i; j++){
		printf("%c", nome[j]);
	}
	printf("\n");
}
return 0;
}
