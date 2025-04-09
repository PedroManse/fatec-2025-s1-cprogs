#include <stdio.h>

int main(void) {
	int e;
	printf("quantidade de erros:");
	scanf("%d", &e);
	printf("%d %s", e, e!=1?"erros detectados":"erro detectado");
}
