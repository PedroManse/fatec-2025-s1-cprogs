#include <stdio.h>

// a melhor estrutura é while, pois a execução garantida de do-while não é necessária
int main() {
    int original, v, f=1;
		printf("Digite um número:");
    scanf("%d", &original);
		v = original;

    while (v!=1) f*=v--;

    printf("O fatorial de %d é %d\n", original, f);
    return 0;
}
