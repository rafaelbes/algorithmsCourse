#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

	char frase1[100];
	char frase2[100] = "";
	char buffer[100];
	char palavrasProibidas[][100] = {"dog", "cat", "lion"};

	int i = 0;
	int ehProibida;

	fgets(frase1, 100, stdin);

	while(i < strlen(frase1)) {
		sscanf(&frase1[i], "%s", buffer);
		i += strlen(buffer);
		while(frase1[i] == ' ' || frase1[i] == '\t' || frase1[i] == '\n')
			i++;
		ehProibida = 0;
		for(int i = 0; i < 3; i++) {
			if(strcmp(buffer, palavrasProibidas[i]) == 0)
				ehProibida = 1;
		}
		if(ehProibida) {
			memset(buffer, '*', strlen(buffer));
		}
		if(strlen(frase2) != 0)
			strcat(frase2, " ");
		strcat(frase2, buffer);
	}
	printf("%s\n", frase2);

	return 0;
}
