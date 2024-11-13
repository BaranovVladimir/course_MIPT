#include <stdio.h>

int main(int argc, char **argv)
{
    int a, count;
    
    scanf("%d", &a);
    while (a%10>=0 && a>0){
        count += a%10;     
        a /= 10;
    }
    printf("%d", count);
    return 0;
}