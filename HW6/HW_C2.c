#include <stdio.h>

int power(int n, int p)
{
    int res = n;

    if (p == 0)
        return 1;

    for(int i = 1; i < p; i++){
        res *= n;
    }
    return res;
}

int main()
{
    int n, p;
    scanf("%d%d", &n, &p);
    printf("%d", power(n,p));
    return 0;
}