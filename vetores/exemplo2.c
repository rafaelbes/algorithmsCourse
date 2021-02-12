
#include <stdio.h>
#include <stdlib.h>

int main() {

	int qtd[5];
	float preco[5];
	float subtotal[5];
	int n;				//quantidade de produtos diferentes
	float total = 0;

	printf("Digite a quantidade de produtos: ");
	scanf("%d", &n);

	for(int i = 0; i < n; i++) {
		printf("Digite quantidade e preço do produto #%d\n", i+1);
		scanf("%d %f", &qtd[i], &preco[i]);
		subtotal[i] = qtd[i]*preco[i];
	}
	//calcular o total
	for(int i = 0; i < n; i++)
		total += subtotal[i];
	printf("Total das compras: %.02f\n", total);

	return 0;
}

