#include <stdio.h>

int main(void) {
	
	int a, b;
	
	printf("Digite um numero: ");
	
	scanf("%i", &a);
	
	printf("Digite outro numero: ");
	
	scanf("%i", &b);
	
	printf("O maior e %d", (a>b)?a:b);
}
