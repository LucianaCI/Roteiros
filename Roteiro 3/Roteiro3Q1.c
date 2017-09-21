#include<stdio.h>
#include<string.h>


int main(){

char nome[50];
int i;

printf("Digite um nome: ");
scanf("%s", nome);

for(i=0; nome[i]!='\0'; i++){
	printf("%c\n", nome[i]);
}

return 0;
}

