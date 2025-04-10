// ex 21
#include <stdio.h>

int fat(int n) {
	if (n == 0) {
		return 1;
	} else {
		return fat(n-1)*n;
	}
}

int main() {
		int original;
		printf("Digite um numero:");
		scanf("%d", &original);

		printf("O fatorial de %d é %d\n", original, fat(original));
		return 0;
}

