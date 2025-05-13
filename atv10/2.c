#include <stdio.h>
#include <string.h>

int main(void) {
	char text[1024];
	fgets(text, 1024, stdin);
	int len = strnlen(text, 1024);
	for (int i = len-1; i>=0; i--) {
		putchar(text[i]);
	}
	printf("\n");
}

