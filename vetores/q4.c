
#include <stdio.h>

int main() {

	int visitado[10], i;
	int destino[10];

	for(i = 0; i < 10; i++) {
		visitado[i] = 0;
		scanf("%d", &destino[i]);
	}

	i = 0;
	do {
		visitado[i] = 1;
		i = destino[i];
	} while(visitado[i] == 0);
	printf("%d\n", i);

	return 0;
}

