#include <stdio.h>

float distanciaEuclidiana(float x0, float y0, float x1, float y1) {
	float dx = x0 - x1;
	float dy = y0 - y1;
	return sqrt(dx*dx + dy*dy);
}

int main() {

	float x0, y0, x1, y1;
	printf("Digite o primeiro ponto (x0, y0): ");
	scanf("%f %f", &x0, &y0);
	printf("Digite o segundo ponto (x1, y1): ");
	scanf("%f %f", &x1, &y1);
	printf("Distancia euclidiana: %f\n", distanciaEuclidiana(x0, y0, x1, y1));

	return 0;
}

