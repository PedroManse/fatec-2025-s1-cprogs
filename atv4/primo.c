#include <stdio.h>
#include <math.h>

int main()
{
    int prim=5101;
    for (int i = sqrt(prim); i>1; i--) {
        if (prim%i == 0) {
            printf("%d é divisível por %d\n", prim, i);
            return 0;
        }
    }
    printf("%d é primo.\n", prim);

    return 0;
}