#include <math.h>
#include <stdio.h>
#include <stdlib.h>

float altura(float x, float y) {
	return sin(cos(y)+x)+cos(y+sin(x));
}

int noIntervalo(float h) {
	return h >= 0 && h <= 2;
}

int seguro(float x, float y) {
	float a, b, c, d, p;
	float w = 0.2;
	a = altura(x+w, y+w);
	b = altura(x-w, y-w);
	c = altura(x+w, y-w);
	d = altura(x-w, y+w);
	p = altura(x, y);
	return noIntervalo(p) && noIntervalo(a) && noIntervalo(b) && noIntervalo(c) && noIntervalo(d);
}

int main() {

	float x, y;
	float t = 2;
	scanf("%f %f", &x, &y);
	if(!seguro(x, y))
		printf("troque de coordenada\n");
	else {
		int total = seguro(x+t, y) + seguro(x-t, y) + seguro(x, y-t) + seguro(x, y+t);
		if(total <= 1)
			printf("inseguro\n");
		else if(total <= 3)
			printf("relativamente seguro\n");
		else
			printf("seguro\n");
	}

	return 0;
}

