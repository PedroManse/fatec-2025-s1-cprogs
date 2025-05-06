#include <stdio.h>

void ler_aluno(float notas[3]) {
	printf("Escreva ambas as notas separadas por um espaço: ");
	scanf("%f %f", &notas[0], &notas[1]);
}

void calc_media(float notas[3]) {
	notas[2] = (notas[0]+notas[1])/2.0;
}

int main(void) {
	int aluno_count = 10;
	float alunos[aluno_count][3];

	for (int i = 0; i<aluno_count; i++) {
		ler_aluno(alunos[i]);
		calc_media(alunos[i]);
	}

	printf("Aluno : Nota 1 | Nota 2 | Média | Passou?\n");
	for (int i = 0; i<aluno_count; i++) {
		printf("%5d : %6.2f | %6.2f | %5.2f | [%c]\n",
				i, alunos[i][0], alunos[i][1],
				alunos[i][2],
				(alunos[i][2]==6.0?'=':
					(alunos[i][2]>6.0)?'+':' '
				)
		);
	}
}
