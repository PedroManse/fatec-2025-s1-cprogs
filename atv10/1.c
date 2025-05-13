#include <stdio.h>

int main(void) {
	char text[1024];
	fgets(text, 1024, stdin);
	int i;
	int on_word = 1;
	int word_count = 1;

	for (i = 0; i<1024 && text[i] != 0; i++) {
		if (text[i] == ' ' && on_word) { // skip double (or more) spaces
			on_word = 1;
			word_count++;
		} else {
			on_word = text[i] != ' ';
		}
	}
	text[i-1] = 0; // remove \n
	printf("O texto \"%s\" tem %d palavras\n", text, word_count);
}
