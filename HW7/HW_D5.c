#include <stdio.h>

int duo(int num)
{
    return (num == 0) || (num == 1) ? num : num % 2 + 10 * duo(num/2);
}

int main()
{
    int num;
    scanf("%d", &num);
    printf("%d", duo(num));  
    return 0;
}