#include <stdio.h>

int main(int argc, char **argv)
{
    int a,b,c;
    
    scanf("%d%d", &a, &b);

    a > b ? (c = b) : (c = a);

    while (a % b != 0 && b % a != 0){
        a > b ? (a %= b, c = a) : (b %= a, c = b);
        }
    
       
    printf("%d",c);
    return 0;
}