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

void ArrMoveR1(int n, int arr[])
{
    int tmp = arr[n-1];

    for(int i=0; i<n; i++)
        arr[n-1-i] = arr[n-2-i];

    arr[0] = tmp;
}

int main()
{
    int arr[SIZE];
    Input(SIZE, arr);
    ArrMoveR1(SIZE, arr);
    PrintArr(SIZE, arr);
    return 0;
}