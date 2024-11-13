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

int MaxPoisk(int n, int arr[])
{
    int max1 = arr[1], max2 = arr[0];

    for(int i=2; i<n-1; i++)
    {
        if (max1 <= arr[i+1])
        {
            if (max1 > max2)
                max2 = max1;
            max1 = arr[i+1];
        }
        else
            if (max2 < arr[i+1])
                max2 = arr[i+1];
    }
    return max1+max2;
}

int main()
{
    int arr[SIZE];
    Input(SIZE, arr);
    printf("%d ", MaxPoisk(SIZE, arr));
    return 0;
}