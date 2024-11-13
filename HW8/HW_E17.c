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

void TheONE(int n, int arr[])
{
    int flag = 1;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {   
            if (i != j) //исключить проверку самого себя
            {
                if (arr[i] == arr[j])
                {
                    flag = 0;
                    break;
                }
                else
                    flag = 1;
                }
        }

        if (flag == 1)
            printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[SIZE];
    Input(SIZE, arr);
    TheONE(SIZE, arr);
    return 0;
}