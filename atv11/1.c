#include <stdio.h>

void ordem(int *a, int *b) {
  if (*a > *b) {
    int t = *a;
    *a = *b;
    *b = t;
  }
}

int main(void) {
	int x;
	int y;
	printf("Digite dois números separados por espaço: ");
	scanf("%d %d", &x, &y);
	ordem(&x, &y);
	printf("Em ordem crescente: %d %d\n", x, y);
}

