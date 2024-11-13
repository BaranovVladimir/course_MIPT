#include <stdio.h>

int main(int argc, char **argv)
{
    int a, y, x1, x2, x3;
    

    scanf("%d", &a);
    x1 = a % 10;
    x2 = (a - x1)/10%10;
    x3 = a /100;
    y = x1 + x2 + x3;
    printf("%d\n", y);
    return 0;
}