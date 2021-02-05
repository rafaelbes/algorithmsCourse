#include <stdio.h>
#include <stdlib.h>

void f(int *x) {
	(*x)--;
}

int main() {

	int k = 3;
	printf("k = %d\n", k);
	f(&k);
	printf("k = %d\n", k);

	return 0;
}

