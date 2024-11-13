#include <stdio.h>

int main(int argc, char **argv)
{
	int a, last;
    int min = 9, max = 0;

    scanf("%d", &a);

    while (a != 0) {
        last = a % 10;
        if (last > max)
            max = last;
        if (last < min)
            min = last;
        a /= 10;
    }

    printf("%d %d", min, max);
        return 0;
}