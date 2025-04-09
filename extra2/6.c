#include <stdio.h>

int main() {
	
	int a, b, c;
	
	
	printf("Digite outro numero: ");
	scanf("%i", &a);
	
	printf("Digite outro numero: ");
	scanf("%i", &b);
	
	printf("Digite outro numero: ");
	scanf("%i", &c);
	
	int maior, meio, menor;
	if (a > b) {
		maior = a;
		menor = b;
	} else {
		maior = b;
		menor = a;
	}
	meio = c;
	if (maior < meio) {
		meio = maior;
		maior = c;
	} else if (meio < menor) {
		meio = menor;
		menor = c;
	}
	printf("%d > %d > %d", maior, meio, menor);
	
	return 0;
}
