#include <stdio.h>

void recur(int n)
{
    static int i = 1;
    int a;

    if(i <= n){
        a = i;
        i++;
        recur(n);
        printf("%d ", a);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    recur(n);
    return 0;
}