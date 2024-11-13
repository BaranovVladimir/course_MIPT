#include <stdio.h>

int sum_digits(int n)
{
    static int sum = 0;

    if (n>0){
        sum += n % 10;
        sum_digits(n/10);
    }
    return sum;
}    


int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", sum_digits(n));
    return 0;
}