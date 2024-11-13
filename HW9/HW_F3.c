#include <stdio.h>

void print_digit(char s[])
{
    int count_digits[10] = {0};

    scanf("%[^\n]", s);
    
    for (int i=0; s[i]; i++)
        count_digits[s[i] - '0']++;  
    
    for (int i=0; i < 10; i++)
    {
        if (count_digits[i] > 0)
            printf("%d %d\n", i, count_digits[i]);
    }
}

int main()
{
    char str[1000];
    print_digit(str);
    return 0;
}