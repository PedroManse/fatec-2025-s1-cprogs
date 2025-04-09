#include <stdio.h>

int main(void) {
	int e;
	printf("Valor:");
	scanf("%d", &e);
	printf("%d = %s", e, e==0?"false":"true");
}
