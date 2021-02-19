#include <stdio.h>
#include <stdlib.h>

int main() {

	int n; //quantidade de questoes
	int gabarito[20];
	int resposta[20];
	int acertos = 0; //quantidade de acertos
	scanf("%d", &n);

	for(int i = 0; i < n; i++)
		scanf("%d", &gabarito[i]);
	for(int i = 0; i < n; i++)
		scanf("%d", &resposta[i]);

	for(int i = 0; i < n; i++) {
		if(resposta[i] == gabarito[i]) {
			acertos++;
		}
	}
	if(acertos == 1)
		printf("1 acerto\n");
	else
		printf("%d acertos\n", acertos);

	return 0;
}

