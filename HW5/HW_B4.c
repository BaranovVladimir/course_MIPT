#include <stdio.h>

int main(int argc, char **argv)
{
    int a;
    
    scanf("%d", &a);
    printf("%s ", 99<a && a<1000 ? "YES" : "NO");
    return 0;
}