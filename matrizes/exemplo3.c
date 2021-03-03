#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

	int matriz[5][5] = {{1, 2, 3, 4, 5}};

	for(int i = 1; i < 5; i++) {
		for(int j = 0; j < 4; j++) {
			matriz[i][j] = matriz[i-1][j] + matriz[i-1][j+1];
		}
		matriz[i][4] = matriz[i][3];
	}

	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 5; j++) {
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}

	return 0;
}
