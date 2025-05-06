#include <stdio.h>

/*
 * obtem(size, vec) -> obtem as temperaturas de cada dia da semana
 * media(size, vec) -> calcula a média da temperatura da semana
 * conta(size, vec, avg) -> quantos dias estao acima da média
 */

// o meu compilador (gcc 13.3) não deixa eu definir um vetor com tamanho antes do tamanho
void obtem(int size, float vec[size]) {
	for (int i = 0; i<size; i++) {
		printf("temp do dia %d:", i);
		scanf("%f", &vec[i]);
	}
}

float media(int size, float vec[size]) {
	float m = 0;
	for (int i = 0; i<size; i++) {
		m+=vec[i];
	}
	return m/size;
}

int conta(int size, float vec[size], float avg) {
	int count = 0;
	for (int i = 0; i<size; i++) {
		if (vec[i] > avg) count++;
	}
	return count;
}

#define max 7
int main() {
	float temp[max], m;
	obtem(max, temp);
	m = media(max, temp);
	printf("Estatística: %d\n", conta(max, temp, m) )
	return 0;
};

