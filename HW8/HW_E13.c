#include <stdio.h>
#include <inttypes.h>

#define SIZE 10

int Input(int n, int arr[])
{
    int i;

    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
    return i;
}

void PrintArr(int k, int arr[])
{
    int i;

    for (i=0; i<k; i++)
        printf("%d ",arr[i]);
}

int Element10(int n, int arr[], int brr[])
{ 
    int k = 0;
    for(int i=0; i<n; i++)
    {
            if(arr[i]/10 % 10 == 0)
            {
                brr[k] = arr[i];
                k++;
            }
    }
    return k;
}

int main()
{
    int first[SIZE], second[SIZE];
    Input(SIZE, first);
    int k = Element10(SIZE, first, second);
    PrintArr(k, second);
    return 0;
}