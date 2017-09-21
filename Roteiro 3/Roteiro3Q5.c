#include<stdio.h>
#include<string.h>

typedef struct Registro{
	char nome[15];
	char genero[10];
	int integrantes;
	int posicao;
}tBandas;

tBandas banda[5];


void Posicao(int n){
	int i;
	
	for(i=0; i<5;i++){		
		if(banda[i].posicao == n){
			printf("BANDA #%d:\n", i+1);
			printf("Nome: %s\n", banda[i].nome);
			printf("Genero: %s\n", banda[i].genero);
			printf("Numero de integrantes: %d\n", banda[i].integrantes);  
		}
	}
}

void Tipo(char* genero){
	int i;
	
	for(i=0; i<5;i++){
		if(strcmp(banda[i].genero, genero) == 0){
			printf("Banda #%d : %s\n", i+1, banda[i].nome);
		}else{
			continue;
		}
	}
	printf("NENHUMA BANDA DESSE GENERO MUSICAL NOS SEUS FAVORITOS\n");
}

void Nome(const char* nome){
	int i;
	
	for(i=0; i<5;i++){
		if(strcmp(banda[i].nome, nome) == 0){ 
			printf("ESSA BANDA ESTA ENTRE AS SUAS FAVORITAS!\n");
		}else{
			continue;
		}
	}
	printf("ESSA BANDA NAO ESTA ENTRE AS SUAS FAVORITAS!\n");
}
	

int main(){

int i, n;
char nome, genero;


puts("---- REGISTRO DAS BANDAS ---- ");

for(i=0; i<5; i++){
	printf("---- BANDA #(%d) ----\n", i+1);
	printf("Nome:");
	scanf("%s", banda[i].nome);
	printf("Genero musical:");
	scanf("%s", banda[i].genero);
	printf("Numero de integrantes:");
	scanf("%d", &banda[i].integrantes);
	printf("Posicao no ranking de 5 melhores:");
	scanf("%d", &banda[i].posicao);
}

printf("\nPROCURE UMA BANDA PELA POSICAO NO RANKING:");
scanf("%d", &n);
Posicao(n);

printf("\nPROCURE UMA BANDA PELO NOME:");
scanf("%s", &nome);
Nome(&nome);

printf("\nPROCURE UMA BANDA PELO GENERO MUSICAL:");
scanf("%s", &genero);
Tipo(&genero);


return 0;
}




 

