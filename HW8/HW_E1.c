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

float SrArifm(int n, int arr[])
{
    int i;
    float result = 0;
    for(i=0; i<n; i++)
        result += arr[i];
    return result /= n;
}

int main()
{
    int arr[SIZE];
    Input(SIZE, arr);
    printf("%.3f", SrArifm(SIZE, arr));
    return 0;
}