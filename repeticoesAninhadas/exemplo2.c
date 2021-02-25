#include <stdio.h>
#include <stdlib.h>

int main() {

	for(int k = 1; k <= 7; k++) {
		for(int i = 1; i <= k; i++) {
			printf("%d ", i);
		}
		printf("\n");
	}
	printf("\n");

	return 0;
}
