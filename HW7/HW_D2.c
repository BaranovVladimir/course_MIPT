#include <stdio.h>

int recur(int n)
{
    static int i = 1, sum = 0;

    if(i <= n){
        sum += i;
        i++;
        recur(n);
    }
    return sum;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d ", recur(n));
    return 0;
}