#include <stdio.h>
#include <stdlib.h>

int main() {

	float largura, comprimento; 	//largura e comprimento do papel
	float bolso;					//comprimento do bolso
	int dobras = 0;

	scanf("%f %f %f", &comprimento, &largura, &bolso);

	while(largura >= bolso && comprimento >= bolso) {
		if(largura > comprimento) {
			largura = largura/2;
		} else {
			comprimento = comprimento/2;
		}
		dobras++; //dobras = dobras + 1
	}
	printf("%d\n", dobras);

	return 0;
}

