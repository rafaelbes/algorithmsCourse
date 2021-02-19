
#include <stdio.h>
#include <stdlib.h>

int main() {

	int altura[30];
	int n;
	int maior = 0; //maior altura
	int a, b, ocorrencia = 0;

	scanf("%d", &n);
	for(int i = 0; i < n; i++)
		scanf("%d", &altura[i]);

	for(int i = 0; i < n; i++) {
		if(altura[i] > maior) {
			maior = altura[i];
		}
	}

	for(int i = 0; i < n; i++) {
		if(altura[i] == maior) {
			if(ocorrencia == 0) {
				a = i;
			} else {
				b = i;
			}
			ocorrencia++;
		}
	}

	printf("%d\n", b-a-1);

	return 0;
}

