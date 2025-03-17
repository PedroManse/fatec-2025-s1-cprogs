#include <stdio.h>

int main(void) {
	int faltas;
	float media;
	printf("Média: ");
	scanf("%f", &media);

	printf("Faltas: ");
	scanf("%d", &faltas);

	if (faltas > 5) {
		printf("F\n");
		return 0;
	}

	if (media < 6.0) {
		printf("C\n");
	} else if (media < 7.5) {
		printf("B\n");
	} else if (media < 9.0) {
		printf("A\n");
	} else if (media >= 9.0) {
		printf("E\n");
	}
	return 0;
}

