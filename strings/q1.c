#include <stdio.h>
#include <string.h>

int main() {

	char campo[21];
	int x, qtd = 0;

	scanf("%s %d", campo, &x);
	if(campo[x] == 'x') {
		printf("bum!\n");
	} else {
		if(x+1 < strlen(campo) && campo[x+1] == 'x') {
			qtd++;
		}
		if(x-1 >= 0 && campo[x-1] == 'x') {
			qtd++;
		}
		printf("%d\n", qtd);
	}

	return 0;
}

