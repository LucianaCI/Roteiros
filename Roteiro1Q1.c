#include<stdio.h>

int main(){

	int idade;
	double preco, desconto;

	scanf("%d %lf", &idade, &preco);

	if(idade <= 18){
		preco *= 0.9;
		desconto = 0.1;
	}else{
		preco *= 0.8;
		desconto = 0.2;
	}
	
	printf("%.2lf - preco\n %.2lf - desconto\n", preco, desconto);

return 0;
}
