#include <stdio.h>
#include <inttypes.h>

#define SIZE 12

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

void ArrMoveR4(int n, int arr[])
{
    for(int j=0; j<4; j++)
    {
        int tmp = arr[n-1];

        for(int i=0; i<n; i++)
            arr[n-1-i] = arr[n-2-i];

        arr[0] = tmp;
    }
}

int main()
{
    int arr[SIZE];
    Input(SIZE, arr);
    ArrMoveR4(SIZE, arr);
    PrintArr(SIZE, arr);
    return 0;
}