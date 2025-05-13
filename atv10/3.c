#include <stdio.h>

int strpos(char text[], char find) {
	int i;
	for (i = 0; text[i] != 0; i++) {
		if (text[i] == find) return i;
	}
	return -1;
}

int strnpos(int max_len, char text[max_len], char find) {
	int i;
	for (i = 0; text[i] != 0 && i < max_len; i++) {
		if (text[i] == find) return i;
	}
	return -1;
}

int main(void) {
	char text[24] = "Hello! I'm this program";
	int h = strpos(text, 'h');
	int j = strnpos(24, text, 'j');
	printf("First h is at %d, -> '%c'\n", h, text[h]);
	printf("First j is at %d, -> '%c'\n", j, text[j]);
}
