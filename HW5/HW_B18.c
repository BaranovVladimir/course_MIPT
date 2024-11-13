#include <stdio.h>

int main(int argc, char **argv)
{
    int n;
    int a = 0, b = 1, fib = 0;
    
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        a = b, b = fib, fib = a+b;
        printf("%d ", fib);
    }
    return 0;
}
