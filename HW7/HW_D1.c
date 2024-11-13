#include <stdio.h>

void recur(int n)
{
    static int i = 1;
    if(i <= n){
        printf("%d ", i);
        i++;
        recur(n);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    recur(n);
    return 0;
}