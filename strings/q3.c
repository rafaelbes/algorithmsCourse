#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {

	char frase1[1001];
	char buffer[1001];
	char nome[11];

	int i = 0;

	scanf("%s", nome);

	fgets(frase1, 1001, stdin);
	int freq = 0;
	int totalAulas = 0;
	int presente = 0;

	while(i < strlen(frase1)) {
		sscanf(&frase1[i], "%s", buffer);
		i += strlen(buffer);
		while(frase1[i] == ' ' || frase1[i] == '\t' || frase1[i] == '\n')
			i++;
		if(strlen(buffer) >= 5 && isdigit(buffer[0]) && isdigit(buffer[1]) && buffer[2] == '/' && isdigit(buffer[3]) && isdigit(buffer[4])) {
			if(presente)
				freq++;
			totalAulas++;
			presente = 0;
		}
		if(strcmp(buffer, nome) == 0)
			presente = 1;
	}
	if(presente)
		freq++;
	printf("%d\n", totalAulas - freq);

	return 0;
}
