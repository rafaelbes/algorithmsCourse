#include <stdio.h>
#include <math.h>

int main() {

	float a, b, c, x1, x2, delta;

	printf("Escreva os coeficientes a, b e c: ");
	scanf("%f %f %f", &a, &b, &c);

	delta = b*b - 4*a*c;
	printf("Delta = %f\n", delta);

	x1 = (-b+sqrt(delta))/(2*a);
	x2 = (-b-sqrt(delta))/(2*a);

	if(delta >= 0) {
		if(delta == 0) {
			printf("%f\n", x1);
		} else {
			printf("%f %f\n", x1, x2);
		}
	} else {
		printf("Nao ha raiz real\n");
	}


	return 0;
}

