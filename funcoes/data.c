#include <stdio.h>
#include <stdlib.h>

char meses[][30] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

//formato
//0: dd/mm/aa
//1: d de mes de ano
void escreverData(int dia, int mes, int ano, int formato) {
	if(formato == 0) {
		printf("%02d/%02d/%02d\n", dia, mes, ano);
	} else {
		printf("%d de %s de %04d\n", dia, meses[mes-1], ano);
	}
}

int main() {

	escreverData(21, 8, 2005, 0);
	escreverData(21, 8, 2005, 1);
	escreverData(25, 10, 2005, 0);
	escreverData(25, 10, 2005, 1);

	return 0;
}

