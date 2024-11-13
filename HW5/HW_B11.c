#include <stdio.h>

int stepen(int base, int exp) {
    int i, result = 1;
    for (i = 0; i < exp; i++)
        result *= base;
    return result;
 }

int main(int argc, char **argv)
{
	int a, last;
    int new = 0;

    scanf("%d", &a);

    int a1 = a, n = 0;

    while (a1 != 0) {
        n++;
        a1 /= 10;
    }

    while (a != 0) {
        last = a % 10;
        new += last*stepen(10,n-1);
        a /= 10;
        n--;
    }

    printf("%d", new);
        return 0;
}