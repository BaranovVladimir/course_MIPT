#include <stdio.h>
 
int Input(int arr[], int n)
{
int i=0,num;
    while(scanf("%d",&num)==1)
        arr[i++] = num;
    return i;
}
 
int compression(int a[],int b[], int N)
{
int countNumbers = 1, countOut = 0;

if(a[0] == 1)
    b[countOut++] = 0;

for(int i=0; i<N-1; i++)
    {
        if(a[i] == a[i+1])
            countNumbers++;
        else
        {
           b[countOut++] = countNumbers;
           countNumbers = 1;
        }
    }
b[countOut++] = countNumbers;    
return countOut;
}

void PrintOUT(int len,int* out)
{
    printf("[%d", out[0]);
    for(int i=1; i<len; i++)
        printf(",%d", out[i]);
    printf("]");
}
 
int main() {
enum {SIZE = 10};
int in[SIZE];
int out[SIZE];

Input(in,SIZE);
int count = compression(in,out,SIZE);
PrintOUT(count,out);
return 0;
}
