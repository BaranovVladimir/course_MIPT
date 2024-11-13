#include <stdio.h>

int main(int argc, char **argv)
{
    int a, max, x1, x2, x3;
    
    scanf("%d", &a);
    x1 = a % 10;
    x2 = (a - x1)/10%10;
    x3 = a /100;
    max = (x1>x2 && x1>x3) ? x1 : 
    (x2 > x3) ? x2 : x3;
    printf("%d\n", max);
    return 0;
}