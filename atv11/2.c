#include <stdio.h>

#define print_vec(fmt, vec, size) ({ \
	printf("[ ");                      \
	for (int i = 0; i<size; i++)       \
		printf(fmt" ", vec[i]);          \
	printf("]\n");                     \
})

void minmax(int size, int v[size], int *out_min, int *out_max) {
  *out_min = v[0];
  *out_max = v[0];
  for (int i = 0; i<size; i++) {
    if (v[i] > *out_max)
      *out_max = v[i];
    else if (v[i] < *out_min)
      *out_min = v[i];
  }
}

#define size 5
int main(void) {
	int x[size] = {-3, 0, 3, 4, 5};
	int min;
	int max;
	minmax(size, x, &min, &max);
	printf("Min: %d\nMax: %d\nVec: ", min, max);
	print_vec("%d", x, size);
	return 0;
}


