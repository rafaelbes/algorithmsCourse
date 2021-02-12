#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int ehPrimo[50001];

//resolve usando o crivo de eratostenes
int main() {

	//a princípio todos são primos
	for(int i = 0; i < 50001; i++)
		ehPrimo[i] = 1;

	//1 não é primo
	ehPrimo[1] = 0;
	//para cada número i
	for(int i = 2; i <= (int) sqrt(50000); i++) {
		//se i for primo
		if(ehPrimo[i]) {
			//marca todos os múltiplos de i como não primos
			for(int j = i*2; j <= 50000; j += i) 
				ehPrimo[j] = 0;
		}
	}

	for(int i = 1; i <= 50000; i++)
		if(ehPrimo[i] && ehPrimo[i+2] && ehPrimo[i+6])
			printf("(%d, %d, %d)\n", i, i+2, i+6);

	return 0;
}

