#include <stdio.h>
#include <math.h>

float distancia(float x0, float y0, float x1, float y1) {
	float dx2 = pow(x0 - x1, 2);
	float dy2 = pow(y0 - y1, 2);
	return sqrt(dx2 + dy2);
}

//quem esta mais proximo de (x, y): (x0, y0) ou (x1, y1) ?
//retorna 0 se for (x0, y0)
//retorna 1 se for (x1, y1)
int pontoMaisProximo(float x, float y, float x0, float y0, float x1, float y1) {
	float d0 = distancia(x, y, x0, y0);
	float d1 = distancia(x, y, x1, y1);
	if(d0 < d1)
		return 0;
	else
		return 1;
}

int main() {

	float x, y, x0, y0, x1, y1;
	printf("Programa do ponto mais proximo!\n");
	printf("Digite 3 pontos: ");
	scanf("%f %f", &x, &y);
	scanf("%f %f", &x0, &y0);
	scanf("%f %f", &x1, &y1);
	if(pontoMaisProximo(x, y, x0, y0, x1, y1) == 0)
		printf("O segundo ponto eh mais proximo do primeiro\n");
	else
		printf("O terceiro ponto eh mais proximo do primeiro\n");
	printf("Obrigado e volte sempre!\n");
	return 0;
}

