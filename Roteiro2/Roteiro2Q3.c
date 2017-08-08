#include <stdio.h>

void Piramide(int n) {
	int i, j;

	for (i=1; i<=n; i++) {
		for (j=1; j<=i; j++){
			printf("%d\t", j);
			
		}
		printf("\n");
	}
}

int main() {
	int n;

	scanf("%d", &n);
	
	Piramide(n);

return 0;
}
