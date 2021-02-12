
#include <stdio.h>
#include <stdlib.h>

int main() {

	int v[4] = {4, 6, 2, 1};

	v[1] = 3;

	for(int i = 0; i < 4; i++) {
		printf("%d ", v[i]);
	}
	printf("\n");

	return 0;
}

