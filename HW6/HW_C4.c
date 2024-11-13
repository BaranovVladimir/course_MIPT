#include <stdio.h>

int f(int x)
{
    return  x < -2 ? 4 : x >= 2 ? (x*x + 4*x + 5) : (x*x);
}

int main()
{
    int x = 1, max = -10;

    while (x != 0){
    scanf("%d", &x);

    if (f(x) > max)
        max = f(x);
    }

    printf("%d", max);
    return 0;
}