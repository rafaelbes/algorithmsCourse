#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

	float x, y;		//coordenada do homem aranha
	float cmax;		//comprimento maximo da teia
	int n;			//quantidade de alvos
	float ax, ay;	//coordenada do alvo
	float dist;		//distancia euclidiana
	int caiu = 0;	//flag

	scanf("%f %f", &x, &y);
	scanf("%f", &cmax);
	scanf("%d", &n);

	for(int i = 0; i < n; i++) {
		scanf("%f %f", &ax, &ay);
		dist = sqrt((x-ax)*(x-ax) + (y-ay)*(y-ay));
		if(dist <= cmax) { //alcança
			x = 2*ax - x;
		} else {
			caiu = 1;
		}
	}

	if(caiu)
		printf("N\n");
	else
		printf("S\n");

	return 0;
}

