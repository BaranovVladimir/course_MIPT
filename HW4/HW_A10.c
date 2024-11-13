#include <stdio.h>

int main(int argc, char **argv)
{
    int a, b, c, d, e;

    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    printf("%d", (a<b && a<c && a<d && a<e) ? a : 
    (b < c && b < d && b < e) ? b : 
    (c < d && c < e) ? c : 
    (d < e) ? d : e);
    return 0;
}