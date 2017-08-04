#include<stdio.h>

int main(){

	double salario, novovalor, desconto;


	scanf("%lf", &salario);
	if(salario <= 420){
		novovalor = salario * 0.92;
		desconto = 0.08;
	}
	if(salario > 420 || salario <= 1350){
		novovalor = salario * 0.91;
		desconto = 0.09;
	}else{	
		novovalor = salario * 0.9;
		desconto = 0.1;
	}
	printf("%.2lf - novo salario\n %.2lf - desconto do INSS\n", novovalor, desconto);
return 0;
}
