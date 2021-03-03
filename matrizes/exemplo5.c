#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main() {

	int m[30][80];
	int m2[30][80];
	int L = 30; //numero de linhas
	int C = 80; //numero de colunas
	int i, j, vivos, dx, dy;

	srand(time(NULL));
	for(i = 0; i < L; i++) {
		for(j = 0; j < C; j++) {
			m[i][j] = rand()%2;
		}
	}

	while(1) {

		for(i = 1; i < L - 1; i++) {
			for(j = 1; j < C - 1; j++) {
				//calcula a quantidade de vizinhos vivos
				vivos = 0;
				for(dx = -1; dx <= 1; dx++) {
					for(dy = -1; dy <= 1; dy++) {
						if(dx == 0 && dy == 0)
							continue;
						if(m[i+dy][j+dx] == 1) {
							vivos++;
						}
					}
				}
				//aplica as regras para obter a nova geracao (armazenada em m2)
				if(m[i][j] == 1) {
					if(vivos == 2 || vivos == 3)
						m2[i][j] = 1;
					else
						m2[i][j] = 0;
				} else {
					if(vivos == 3)
						m2[i][j] = 1;
					else
						m2[i][j] = 0;
				}
				
			}
		}

		//transfere os valores da nova geracao (m2) para a geracao atual (m)
		for(i = 0; i < L; i++) {
			for(j = 0; j < C; j++) {
				m[i][j] = m2[i][j];
			}
		}

		system("clear");
		for(i = 0; i < L; i++) {
			for(j = 0; j < C; j++) {
				if(m[i][j] == 0)
					printf("-");
				else
					printf("#");
			}
			printf("\n");
		}
		usleep(100000);
	}

	return 0;
}
