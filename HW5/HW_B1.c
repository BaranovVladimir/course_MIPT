#include <stdio.h>

int main(int argc, char **argv)
{
    int n, i;
    
    scanf("%d", &n);
    for(i=1; i<=n; i++) {
        printf("%d %d %d\n", i, i*i, i*i*i);
    }
    return 0;
}