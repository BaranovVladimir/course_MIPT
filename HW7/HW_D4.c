#include <stdio.h>

void print_num(int num)
{
    int i;

    if(num > 0){
        i = num % 10;
        num /= 10;
        print_num(num);
        printf("%d ", i);
    }
}

int main()
{
    int num;
    scanf("%d", &num);
    num == 0 ? printf("%d ", num) : print_num(num);  
    return 0;
}