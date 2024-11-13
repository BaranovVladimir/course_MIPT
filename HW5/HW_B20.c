#include <stdio.h>

int main(int argc, char **argv)
{
    int n, i;
    int flag = 0;

    scanf("%d", &n);

    for (int i = 2; i < n-1; i++){
        if (n % i == 0){
            flag = 1;
            break;
        }
    }

    printf("%s", flag == 1 || n == 1 ? "NO" : "YES");
    return 0;
}