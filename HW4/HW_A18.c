#include <stdio.h>

int main(int argc, char **argv)
{
    int a,b;
    
    scanf("%d%d", &a, &b);
    printf("%s\n", a>b ? "Above" : a<b ? "Less" : "Equal");
    return 0;
}