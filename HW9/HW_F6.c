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

int is_two_same(int size, int a[])
{
    int max = a[0];

    for(int i=0; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            if (a[i] == a[j])
                return 1;
        }

    }
    return 0;
}

int main()
{
    int arr[SIZE];
    Input(SIZE, arr);
    printf("%d", is_two_same(SIZE, arr));
    return 0;
}