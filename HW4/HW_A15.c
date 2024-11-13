#include <stdio.h>

int main(int argc, char **argv)
{
    int x1, y1, x2, y2;
    float k, b;
    
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
    k = 1.*(y1-y2)/(x1-x2);
    b = y1 - k*x1;
    printf("%.2f %.2f\n", k,b);
    return 0;
}