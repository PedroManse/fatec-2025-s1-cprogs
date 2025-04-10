// ex 20
#include <stdio.h>

int main() {
	int n;
	float x;
	printf("x:");
	scanf("%f", &x);
	printf("elevado a:");
	scanf("%d", &n);
	float sum = 1;
	for (int i = 0; i<n; i++) {
		sum *= x;
	}
	printf("O resultado é %.3f\n", sum);
}

