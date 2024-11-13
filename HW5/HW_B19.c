#include <stdio.h>

int main(int argc, char **argv)
{
    int a, count;
    
    scanf("%d", &a);
    while (a != 0){
        count += a%10;     
        a /= 10;
    }
    printf("%s", count == 10 ? "YES" : "NO");
    return 0;
}