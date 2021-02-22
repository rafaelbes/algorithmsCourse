#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

	char palavra1[4] = {'I', 'M', 'D', '\0'};
	char palavra2[] = "IMD";

	palavra2[0] = 'C';
	palavra2[1] = '\0';
	printf("%s\n", palavra2);

	return 0;
}

