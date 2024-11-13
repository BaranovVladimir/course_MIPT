#include <stdio.h>
#include <string.h>

#define N 1001

int is_palindrome(char *str) {
    int len = strlen(str);

    for(int i=0;i < len/2;i++) 
    {
        if(str[i] != str[len-i-1]) 
        {
            return 0;
        }
    }
    return 1;
}

int main() {
    FILE *f1, *f2;
    char str[N];
    int flag;

    f1 = fopen("input.txt","r");
    f2 = fopen("output.txt","w");

    fgets(str, N, f1);
    fclose(f1);
    
    str[strcspn(str, "\n")] = '\0';

    flag = is_palindrome(str);
    
    flag == 1 ? fprintf(f2, "YES") : fprintf(f2, "NO");

    fclose(f2);
    return 0;
}