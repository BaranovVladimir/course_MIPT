#include <stdio.h>

int main(int argc, char **argv)
{
	int a;
    int count = 0;

    scanf("%d", &a);

    while (a > 9) {
        int last = a % 10;
        int prelast = a / 10 % 10;
        if (last <= prelast){
            count++;
            break;
        }
        a /= 10;
    }
    printf("%s", count == 0 ? "YES" : "NO");
        return 0;
}