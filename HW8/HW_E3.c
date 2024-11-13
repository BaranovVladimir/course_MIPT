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

int MinPoisk(int n, int arr[])
{
    int min = arr[0];

    for(int i=1; i<n; i++)
        if (min > arr[i])
            min = arr[i];
    return min;
}

int MinPoint(int n, int arr[])
{
    int min = arr[0], minPoint = 1;

    for(int i=1; i<n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
            minPoint = i+1;
        }
    }
    return minPoint;
}

int MaxPoisk(int n, int arr[])
{
    int max = arr[0];

    for(int i=1; i<n; i++)
        if (max < arr[i])
            max = arr[i];
    return max;
}

int MaxPoint(int n, int arr[])
{
    int max = arr[0], maxPoint = 1;

    for(int i=1; i<n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            maxPoint = i+1;
        }
    }
    return maxPoint;
}

int main()
{
    int arr[SIZE];
    Input(SIZE, arr);
    printf("%d ", MaxPoint(SIZE, arr));
    printf("%d ", MaxPoisk(SIZE, arr));
    printf("%d ", MinPoint(SIZE, arr));
    printf("%d", MinPoisk(SIZE, arr));
    return 0;
}