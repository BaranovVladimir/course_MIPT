#include <stdio.h>

int duo(int num)
{
    static int sum = 0;

    if (num > 0){
        if (num % 2 != 0)
            sum += 1;
        duo(num/2);
    }
    
    return sum;
}

int main()
{
    int num;
    scanf("%d", &num);
    printf("%d", duo(num));  
    return 0;
}