
#include <stdio.h>
#include <stdlib.h>

int somaVetor(int v[], int n) {
	int soma = 0;
	for(int i = 0; i < n; i++) {
		soma += v[i];
	}
	return soma;
}

void incrementaElementos(int v[], int n) {
	for(int i = 0; i < n; i++)
		v[i]++;
}

int main() {

	int u[] = {2, 6, 4, 5};
	printf("%d\n", somaVetor(u, 4));

	for(int i = 0; i < 4; i++)
		printf("%d ", u[i]);
	printf("\n");

	incrementaElementos(u, 4);
	
	for(int i = 0; i < 4; i++)
		printf("%d ", u[i]);
	printf("\n");

	return 0;
}

