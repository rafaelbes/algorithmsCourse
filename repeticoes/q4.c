#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

	float x, y;		//coordenada do dardo
	float xa, ya;	//coordenada do dardo anterior
	float dist;		//distancia euclidiana
	int pts = 0;	//quantidade de pontos

	for(int i = 0; i < 10; i++) {
		scanf("%f %f", &x, &y);

		//pontuacao principal
		dist = sqrt((x-0)*(x-0) + (y-0)*(y-0));
		if(dist <= 1)
			pts += 10;
		else if(dist <= 2)
			pts += 6;
		else if(dist <= 3)
			pts += 4;

		//pontuacao bonus
		if(i >= 1) {
			dist = sqrt((x-xa)*(x-xa) + (y-ya)*(y-ya));
			if(dist <= 1)
				pts += 5;
			else if(dist <= 2)
				pts += 3;
			else if(dist <= 3)
				pts += 2;
		}

		xa = x;
		ya = y;
	}
	printf("%d\n", pts);

	return 0;
}

