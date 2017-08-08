#include<stdio.h>
#include<string.h>

int main(){

int  i,j;
char telefone1[10];

printf("Digite um telefone de pelo menos 7 digitos: ");
scanf("%s", telefone1);

for(i=0; telefone1[i] != '\0'; i++){
	if(telefone1[i] == '-'){
		for(j=i; telefone1[j]!='\0'-1; j++){
		telefone1[j] = telefone1[j+1];
		}
	}
}

if(strlen(telefone1) == 7){
	printf("Telefone corrigido: 3%s\n", telefone1);
}else{
	printf("Telefone : %s\n", telefone1);
}

return 0;
}

	

