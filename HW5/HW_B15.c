#include <stdio.h>
int main(void)
{
    int a = 1, count = 0;

    while (a != 0){
        scanf("%d", &a);
        if (a % 2 == 0 && a != 0)
            count++;
    }

    printf("%d", count);
	return 0;
}