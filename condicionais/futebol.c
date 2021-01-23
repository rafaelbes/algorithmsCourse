#include <stdio.h>

int main() {

	int golsA, golsB;
	int penaltisA, penaltisB;

	printf("Digite o numero de gols do time A: ");
	scanf("%d", &golsA);
	printf("Digite o numero de gols do time B: ");
	scanf("%d", &golsB);

	if(golsA > golsB) 
		printf("Vencedor: time A");
	else
		if(golsB > golsA) 
			printf("Vencedor: time B");
		else {
			printf("Digite o numero de gols do time A nos penaltis: ");
			scanf("%d", &penaltisA);
			printf("Digite o numero de gols do time B nos penaltis: ");
			scanf("%d", &penaltisB);
			if(penaltisA > penaltisB) {
				printf("Vencedor: time A");
			} else {
				printf("Vencedor: time B");
			}
		}



	return 0;
}

