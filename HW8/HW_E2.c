#include <stdio.h>
#include <inttypes.h>

#define SIZE 5

int Input(int n, int arr[])
{
    int i;

    for(i=0; i<n; i++)
    scanf("%d", &arr[i]);
    return i;
}

int MinPoisk(int n, int arr[])
{
    int min = arr[0];

    for(int i=0; i<n; i++)
        if (min > arr[i])
            min = arr[i];
    return min;
}

int main()
{
    int arr[SIZE];
    Input(SIZE, arr);
    printf("%d", MinPoisk(SIZE, arr));
    return 0;
}