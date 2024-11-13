#include <stdio.h>
#include <string.h>

int main(void){
    FILE *f1, *f2;
    int i = 0;
    int n;
    char c, last;

    f1 = fopen("input.txt","r");
    f2 = fopen("output.txt","w");


    fseek(f1, -1, SEEK_END);
    last = fgetc(f1);
    fseek(f1, 0, SEEK_END);
    n = ftell(f1);
    fseek(f1, 0, SEEK_SET);

    printf("%d", n);

    char str[n];

    // while ((c=fgetc(f1)) != EOF && (c != '\n'))
    //     str[i++] = c;

    fscanf(f1, "%[^\n]", str);
    fclose(f1);
    str[strcspn(str, "\n")] = '\0';

    for(int i=0; i<n-1; i++)
        {
            if(str[i] == last)
                fprintf(f2, "%d ", i);
        }

    fclose(f2);
    return 0;
}