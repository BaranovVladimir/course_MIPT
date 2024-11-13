#include <stdio.h>
#include <inttypes.h>

#define SIZE 20

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

void sort_array(int size, int a[])
{ 
        for(int i=0; i<size-1; i++)
        {
            for(int j=0; j<size-1; j++)
            {
                if(a[j] > a[j+1])
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
    sort_array(SIZE, arr);
    PrintArr(SIZE, arr);
    return 0;
}