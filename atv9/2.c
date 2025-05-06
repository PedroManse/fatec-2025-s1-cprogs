#include <stdio.h>
#define print_vec(fmt, vec, size) ({ \
	printf("[ ");                      \
	for (int i = 0; i<size; i++)       \
		printf(fmt" ", vec[i]);          \
	printf("]\n");                     \
})

int main(void) {
	int w[9];
	int i = 5;
	w[0] = 17;
	w[2] = 9;
	w[8] = 95;
	w[4] = 47;
	w[5] = 9;
	w[6] = 56;
	w[7] = 78;
	w[1] = 95;
	print_vec("%d", w, 9);

	// [17, 95, 9, ?, 47, 9, 56, 78, 95]
}
