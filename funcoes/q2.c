#include <stdio.h>
#include <stdlib.h>

int ehPrimo(int x) {
	int qtd = 0;
	for(int i = 1; i <= x; i++)
		if(x%i == 0)
			qtd++;
	return qtd == 2;
}

int main() {

	for(int i = 1; i <= 50000; i+=2)
		if(ehPrimo(i) && ehPrimo(i+2) && ehPrimo(i+6))
			printf("(%d, %d, %d)\n", i, i+2, i+6);

	return 0;
}

