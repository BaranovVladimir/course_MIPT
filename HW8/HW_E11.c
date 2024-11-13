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

void PrintArr(int n, int arr[])
{
    int i;

    for (i=0; i<n; i++)
        printf("%d ",arr[i]);
}

void ArrSortLast(int n, int arr[])
{ 
        for(int i=0; i<n-1; i++)
        {
            for(int j=0; j<n-1; j++)
            {
                if(arr[j]%10 > arr[j+1]%10)
                {
                    int tmp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = tmp;
                }
            }
        }
}

int main()
{
    int arr[SIZE];
    Input(SIZE, arr);
    ArrSortLast(SIZE, arr);
    PrintArr(SIZE, arr);
    return 0;
}