#include <stdio.h>
#include <math.h>

int main(void) {
	float a, b, c;
	printf("a:"); scanf("%f", &a);
	printf("b:"); scanf("%f", &b);
	printf("c:"); scanf("%f", &c);

	float delta = sqrtf(b*b - 4 * a * c);
	float xp = (-b+delta)/2*a;
	float xn = (-b-delta)/2*a;
	printf("+X: %f\n-X: %f\n", xp, xn);
	return 0;
}

