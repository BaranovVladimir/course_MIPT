#include <stdio.h>

void recur(int n)
{
    if(n > 0){
        printf("%d ", n%10);
        n /= 10;
        recur(n);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    n == 0 ? printf("%d ", n) : recur(n);  
    return 0;
}