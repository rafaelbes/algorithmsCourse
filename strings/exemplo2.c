
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

	char frase[5];

	fgets(frase, 5, stdin);
	printf("[%s]\n", frase);
	printf("[%c]\n", getchar());

	return 0;
}
