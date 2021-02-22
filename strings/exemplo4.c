#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

	char frase1[100];
	char frase2[100];

	fgets(frase1, 100, stdin);

	strcpy(frase2, frase1);

	for(int i = 0; i < strlen(frase2); i++) {
		if(frase2[i] == ' ')
			frase2[i] = '.';
	}
	printf("%s\n", frase2);

	return 0;
}
