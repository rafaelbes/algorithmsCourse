#include <stdio.h>

int main() {

	int a, b;

	printf("Digite a: ");
	scanf("%d", &a);
	do {
		printf("Digite b: ");
		scanf("%d", &b);
	} while(b == 0);

	printf("%f\n", ((float)a)/b);

	return 0;
}

