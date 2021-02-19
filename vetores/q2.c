
#include <stdio.h>
#include <stdlib.h>

int main() {

	int m; //quantidade de figurinhas da coleção completa
	int n; //quantidade de figurinhas do seu album
	int fig;
	int possui[1000] = {0}; //se possui aquela figurinha ou não

	scanf("%d %d", &m, &n);

	for(int i = 0; i < n; i++) {
		scanf("%d", &fig);
		possui[fig] = 1;
	}

	for(int i = 1; i <= m; i++) {
		if(!possui[i]) {
			printf("%d ", i);
		}
	}

	return 0;
}

