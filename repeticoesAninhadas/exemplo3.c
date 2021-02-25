#include <stdio.h>
#include <stdlib.h>

int main() {

	int figurinhas[10] = {1, 3, 2, 1, 7, 8, 2, 5, 1};
	int contada[10] = {0};
	int n = 9;
	int repetidas = 0;

	for(int a = 0; a < n; a++) {
		if(!contada[a]) {
			for(int b = a+1; b < n; b++) {
				if(figurinhas[a] == figurinhas[b]) {
					contada[b] = 1;
					repetidas++;
				}
			}
		}
	}
	printf("%d\n", repetidas);

	return 0;
}
