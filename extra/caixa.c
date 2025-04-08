#include "caixa.h"
#include <stdio.h>
#define bool(a) ({ (a) ? "Verdadeiro" : "Falso"; })

void print_bits(char d) {
	int printing = 0;
	printf("0b");
	for (int i = sizeof(char)*8; i >= 0; i--) {
			int this = (d >> i)&1 == 1;
			printing |= this;
			if (printing) {
				printf("%d", this);
			}
	}
	printf("\n");
}

void char_tests(char c) {
	printf("%c é char = %s\n", c, bool(is_char(c)));
	if (is_char(c)) {
		printf("%c é minúsculo? = %s\n", c, bool(eh_minusculo(c)));
		printf("%c é maiúsculo? = %s\n", c, bool(eh_maiusculo(c)));
		printf("%c como minúsculo = %c\n", c, minusculo(c));
		printf("%c como maiúsculo = %c\n", c, maiuscula(c));
		printf("%c com a outra caixa = %c\n", c, troca_a_caixa(c));
	}
}

int main(void) {
	char_tests('!');
	char_tests('c');
	char_tests('C');
}

