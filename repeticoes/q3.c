
#include <stdio.h>
#include <stdlib.h>

int main() {

	int A, B;
	int somaDivA = 0;	//soma dos divisores proprios de A
	int somaDivB = 0;	//soma dos divisores proprios de B

	scanf("%d %d", &A, &B);
	for(int i = 1; i < A; i++)
		if(A%i == 0)
			somaDivA += i;
	for(int i = 1; i < B; i++)
		if(B%i == 0)
			somaDivB += i;
	if(abs(somaDivA - B) <= 2 && abs(somaDivB - A) <= 2)
		printf("S\n");
	else
		printf("N\n");

	return 0;
}

