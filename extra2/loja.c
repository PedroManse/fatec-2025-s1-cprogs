// ex 23
#include <stdio.h>

float soma_da_compra() {
	float c, soma = 0;
	printf("Defina o preco como 0 para finalizar a compra\n");
	do {
		if (soma) {
			printf("Total: %.2f\n", soma);
		}
		printf("Preco: R$ ");
		scanf("%f", &c);
		soma+=c;
	} while (c != 0);
	return soma;
}


#define desc(p, d) if (valor <= (p)) return valor * (1.0-d/100.0);
float desconto(float valor) {
	desc(  50.0,   5 );
	desc( 100.0,  10 );
	desc( 200.0,  15 );
	return valor * 0.80;
}

int main(void) {
	float compra = soma_da_compra();
	float preco = desconto(compra);
	printf("Com compra de R$ %.2f, R$ %.2f deve ser pago\n", compra, preco);
}

