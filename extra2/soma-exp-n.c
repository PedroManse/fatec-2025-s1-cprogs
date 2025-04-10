// ex 22
#include <stdio.h>

float elv(float a, int n) {
	float s = 1.0;
	for (int i = 0; i<n;i++) {
		s *= a;
	}
	return s;
}

int main() {
	int n;
	float x;
	printf("n:");
	scanf("%d", &n);

	printf("x:");
	scanf("%f", &x);

	float sum = 0.0;
	for (int i = 0; i<n; i++) {
		sum += elv(x, i);
	}
	printf("A soma de %.3f elevados de 0 ate %d é %.3f\n", x, n, sum);
}

