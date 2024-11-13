#include <stdio.h>

int main(int argc, char **argv)
{
    int a, b, count;
    
    scanf("%d%d", &a, &b);
    while(a<=b) {
        count += a*a;     
        a++;
    }
    printf("%d ", count);
    return 0;
}