#include <stdio.h>

int main(int argc, char **argv)
{
    int a, i, n;
    
    scanf("%d", &n);

    for(i = 10; i <= n; i++){

        a = i;
        int sm = 0, um = 1;

        while (a != 0){
            sm += a%10;
            um *= a%10;   
            a /= 10;
        }
        
        if (sm == um)
            printf("%d ", i);
    }
    return 0;
}