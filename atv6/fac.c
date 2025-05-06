#include <stdio.h>

int fat(int n) {
	if (n == 0) {
		return 1;
	} else {
		return fat(n-1)*n;
	}

}

// a melhor estrutura é while, pois a execução garantida de do-while não é necessária
int main() {
		int original;
		printf("Digite um número:");
		scanf("%d", &original);

		printf("O fatorial de %d é %d\n", original, fat(original));
		return 0;
}

