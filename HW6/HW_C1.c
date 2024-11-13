#include <stdio.h>

int mod(int n)
{
    return (n > 0) ? n : -n;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", mod(n));
    return 0;
}
