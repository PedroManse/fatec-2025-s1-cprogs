#include <stdio.h>

int main() {
	int c;
	printf("Digite um número para saber o seu quadrado, ou 0 para finalizar o programa\n");
	// Eu deveria, ou usar fgets para ler sem \n para pegar input
	// ou voltar a linha no printf
	while (1) {
		scanf("%d", &c);
		if (c == 0) {
			printf("-> Termina o programa\n");
			return 0;
		} else {
			printf("-> %d\n", c*c);
		}
	};
}
