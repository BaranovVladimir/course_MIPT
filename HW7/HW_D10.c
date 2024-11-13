#include <stdio.h>

int is_prime(int n, int delitel)
{
    if ((n >= delitel) && (n >= 1)){

        if (n == delitel)
            return 0;

        if (n % delitel == 0)
        return 1;

        else
            is_prime(n, delitel+1);
    }
}


int main()
{
    int n;
    scanf("%d", &n);
    is_prime(n, 2) ? printf("NO") : printf("YES");
    return 0;
}