#include <stdio.h>

void posled(int n, int k)
{
    
    for(int i=0; i<k; i++){
        if (n == 0)
            return;
            printf("%d ", k);
            n--;
    }  
    posled(n,k+1); 
    
}

int main()
{
    int n;
    scanf("%d", &n);
    posled(n,1);  
    return 0;
}