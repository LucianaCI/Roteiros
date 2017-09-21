#include<stdio.h>
#include<string.h>

int main(){

int i, j;
char nome[20];

scanf("%s", nome);

for(i=0, j=strlen(nome)-1; nome[i]!='\0', j>(i+2); i++, j--){
		if(nome[j] == nome[i]){
			continue;
		}else{
			puts("NAO EH PALINDROMO\n");
			return -1;
		}
	}
puts("EH PALINDROMO\n");



return 0;
}
