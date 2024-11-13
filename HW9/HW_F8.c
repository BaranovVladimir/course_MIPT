#include <stdio.h>
 
int Input(int n, int a[])
{
    int i, sizeNew;

    for(i=0; i<n; i++)
        {
        scanf("%d", &a[i]);
        if(a[i] == 0)
            break;
        }
    return i;
}

void sort_array(int size, int a[])
{ 
        for(int i=0; i<size-1; i++)
        {
            for(int j=0; j<size-1; j++)
            {
                if(a[j] < a[j+1])
                {
                    int tmp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = tmp;
                }
            }
        }
}

int findNumber(int n, int a[])
{
    for(int i=0; i<n; i++)
        if(a[i]-1 != a[i+1])
            return a[i]-1;

}
 
int main() 
{
enum {SIZE = 1000};
int arr[SIZE];

int count = Input(SIZE, arr);
sort_array(count, arr);
printf("%d", findNumber(count, arr));
return 0;
}