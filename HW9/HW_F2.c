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

void PrintArr(int n, int arr[])
{
    int i;

    for (i=0; i<n; i++)
        printf("%d ",arr[i]);
}

void sort_even_odd(int n, int a[])
{ 
        for(int i=0; i<n-1; i++)
        {
            for(int j=0; j<n-1; j++)
            {
                if((a[j] % 2 != 0) && (a[j+1] % 2 == 0))
                {
                    int tmp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = tmp;
                }
            }
        }
}

int main()
{
    int arr[SIZE];
    Input(SIZE, arr);
    sort_even_odd(SIZE, arr);
    PrintArr(SIZE, arr);
    return 0;
}