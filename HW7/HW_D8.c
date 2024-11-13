#include <stdio.h>

void recur(int a, int b)
{   
    if (a == b){
        printf("%d ", a);
    }
    else{
        if (a < b){
            printf("%d ", a);
            recur(a+1,b);
        }
        if (a > b){
            printf("%d ", a);
            recur(a-1,b);
        }
    }
}    


int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    recur(a, b);
    return 0;
}