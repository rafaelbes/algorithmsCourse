#include <stdio.h>

void printHorario(int h, int m, int fmt) {
	if(m >= 60) {
		m -= 60;
		h += 1;
	}
	h %= 24;
	if(fmt == 0) {
		printf("%02d:%02d\n", h, m);
	} else {
		if(h <= 11) {
			if(h == 0)
				h = 12;
			printf("%02d:%02d AM\n", h, m);
		} else {
			if(h == 12)
				h += 12;
			printf("%02d:%02d PM\n", h-12, m);
		}
	}
}

int main() {

	int h, m, fmt;
	scanf("%d %d %d", &h, &m, &fmt);
	printHorario(h, m, fmt);
	printHorario(h+1, m, fmt);
	printHorario(h+2, m+10, fmt);
	printHorario(h+4, m+40, fmt);
	printHorario(h+12, m+5, fmt);


}

