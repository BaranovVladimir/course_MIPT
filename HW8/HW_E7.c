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

int PrintArr(int n, int arr[])
{
    int i;

    for (i=0; i<n; i++)
        printf("%d ",arr[i]);
}

void Invers(int n, int arr[])
{
    int tmp;

    for(int i=0; i<2; i++)
    {
        tmp = arr[i];
        arr[i] = arr[n/2-1-i];
        arr[n/2-1-i] = tmp;

        tmp = arr[n/2+i];
        arr[n/2+i] = arr[n-1-i];
        arr[n-1-i] = tmp;
    }
}

int main()
{
    int arr[SIZE];
    Input(SIZE, arr);
    Invers(SIZE, arr);
    PrintArr(SIZE, arr);
    return 0;
}