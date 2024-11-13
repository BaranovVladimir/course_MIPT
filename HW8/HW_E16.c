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

int MaxFound(int n, int arr[])
{
    int firstMax = 0, newMax = 0;
    int num;

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if (arr[i] == arr[j])
            {
                newMax++;
            }
        }

        if (newMax > firstMax)
        {
            firstMax = newMax;
            num = arr[i];
        }
        newMax = 0;
    }
    return num;
}

int main()
{
    int arr[SIZE];
    Input(SIZE, arr);
    printf("%d", MaxFound(SIZE, arr));
    return 0;
}