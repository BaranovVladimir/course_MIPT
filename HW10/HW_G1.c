#include <stdio.h>
#define N 100

int main(void){
    FILE *f1, *f2;
    int count = 0;
    char str[N], c;

    f1 = fopen("input.txt","r");
    f2 = fopen("output.txt","w");

    if(f1 != NULL){
        while ((c=fgetc(f1)) != EOF && (c != '\n'))
            str[count++] = c;
    }
    else
        printf ("Can't open file\n");

    fclose(f1);

    fprintf(f2, "%s, %s, %s %d", str, str, str, count);
    fclose(f2);
    return 0;
}