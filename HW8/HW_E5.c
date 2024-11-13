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
    int res = 0;

    for(int i=0; i<n; i++)
        if (arr[i] > 0)
            res += arr[i];
    return res;
}

int main()
{
    int arr[SIZE];
    Input(SIZE, arr);
    printf("%d", MinPoisk(SIZE, arr));
    return 0;
}