#include<stdio.h>

int main(){

	int n, maior = 0;

while(1){
	scanf("%d", &n);
	if(n == 0){
		break;
	}
	if(n>maior){
		maior = n;
	}
}
 
	printf("O maior numero foi : %d\n", maior);

return 0;
}
