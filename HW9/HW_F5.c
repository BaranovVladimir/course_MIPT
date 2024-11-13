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

int find_max_array(int size, int a[])
{
    int max = a[0];

    for(int i=0; i<size; i++)
        if (max < a[i])
            max = a[i];
    return max;
}

int main()
{
    int arr[SIZE];
    Input(SIZE, arr);
    printf("%d", find_max_array(SIZE, arr));
    return 0;
}