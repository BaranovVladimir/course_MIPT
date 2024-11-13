#include <stdio.h>

int main(int argc, char **argv)
{
	int a;
    int count = 0;

    scanf("%d", &a);

    while (a != 0) {
        if ((a%10) % 2 != 0)
            count++;
        a /= 10;
    }

    printf("%s", count == 0 ? "YES" : "NO");
        return 0;
}