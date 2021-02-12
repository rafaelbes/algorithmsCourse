
#include <stdio.h>
#include <stdlib.h>

int main() {

	int n;
	int cont[10]; //cont[1]... cont[9]

	for(int i = 0; i < 10; i++)
		cont[i] = 0;

	do {
		scanf("%d", &n);
		cont[n]++;
	} while(n != 0);

	for(int i = 1; i < 10; i++)
		printf("O numero %d apareceu %d vezes\n", i, cont[i]);

	return 0;
}

