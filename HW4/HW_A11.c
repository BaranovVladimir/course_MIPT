#include <stdio.h>

int main(int argc, char **argv)
{
    int a, b, c, d, e, max, min;

    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

    max = (a>b && a>c && a>d && a>e) ? a : 
    (b > c && b > d && b > e) ? b : 
    (c > d && c > e) ? c : 
    (d > e) ? d : e;

    min = (a<b && a<c && a<d && a<e) ? a : 
    (b < c && b < d && b < e) ? b : 
    (c < d && c < e) ? c : 
    (d < e) ? d : e;
    
    printf("%d\n", max + min);
    return 0;
}