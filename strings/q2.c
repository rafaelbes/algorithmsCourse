#include <string.h>
#include <stdio.h>
#include <ctype.h>

int estaNoPadrao(char placa[20], char padrao[20]) {
	if(strlen(placa) != strlen(padrao)) return 0;

	for(int i = 0; i < strlen(placa); i++) {
		if(padrao[i] == 'L') {
			if(!isupper(placa[i]))
				return 0;
		} else if(padrao[i] == 'A') {
			if(!isdigit(placa[i]))
				return 0;
		} else
			if(padrao[i] != placa[i])
				return 0;
	}
	return 1;
}

int main() {

	char placa[20];

	scanf("%s", placa);

	if(estaNoPadrao(placa, "LLL-AAAA"))
		printf("brasileiro\n");
	else if(estaNoPadrao(placa, "LLLALAA"))
		printf("mercosul\n");
	else
		printf("invalido\n");

	return 0;
}

