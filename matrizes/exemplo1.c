#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

	int matriz[2][3] = {{1, 2, 3}, {2, 3, 4}};

	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 3; j++) {
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}

	return 0;
}
