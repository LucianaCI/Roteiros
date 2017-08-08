#include<stdio.h>
#include<stdlib.h>

bool Eh_divisivel(int x, int y){

	if((x % y) == 0){
		return true;
	}else{
		return false;
	}
}

bool Eh_primo(int x){

	for (int i = 2; i < x; i++){

		if ((x % i) == 0)
			return false;
	}

	return true;
}

int main (){
	int n1, n2, n3;
printf("Digite os numeros que voce quer testar se sao divisiveis:");
scanf("%d %d", &n1, &n2);
Eh_divisivel(n1,n2);
printf("Digite o numero que voce quer testar se eh primo:");
scanf("%d", &n3);
Eh_primo(n3);
}

