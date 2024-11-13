#include <stdio.h>

int main(int argc, char **argv)
{
    int a, b;
    
    scanf("%d%d", &a, &b);
    while(a<=b) {
        printf("%d ", a*a);
        a++;
    }
    return 0;
}