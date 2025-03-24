#include <stdio.h>

int main() {
	int n,x;
	printf("Base:");
	scanf("%d", &x);
	printf("Expoente:");
	scanf("%d", &n);

	int pot = 1;
	for (int i = 0; i<n; i++) {
			pot*=x;
	}
	printf("A potência de %d elevado a %d é %d\n", x, n, pot);

	return 0;
}
