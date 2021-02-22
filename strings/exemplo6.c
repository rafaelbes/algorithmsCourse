#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

	char frase1[100];
	char buffer[100];

	int i = 0;

	fgets(frase1, 100, stdin);

	while(i < strlen(frase1)) {
		sscanf(&frase1[i], "%s", buffer);
		i += strlen(buffer);
		while(frase1[i] == ' ' || frase1[i] == '\t' || frase1[i] == '\n')
			i++;
	}

	return 0;
}
