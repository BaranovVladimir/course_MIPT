#include <stdio.h>

long long int pow2(int n)
{
    long long int res = 1;

    while (n > 1){
        res *= 2;
        n--;
    }

    return res;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%llu", pow2(n));
    return 0;
}