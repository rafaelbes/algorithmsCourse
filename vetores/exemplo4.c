
#include <stdio.h>
#include <stdlib.h>

int main() {

	char fib[4] = {1, 1, 2, 3};
	for(int i = 0; i < 4; i++)
		printf("Endereço: %p, valor = %d\n", &fib[i], fib[i]);

	return 0;
}

