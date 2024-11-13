#include <stdio.h>

int main(void){
    FILE *f1, *f2;
    int num;

    f1 = fopen("input.txt","r");
    f2 = fopen("output.txt","w");

    if(f1 != NULL){
        fscanf(f1, "%d", &num);
    }
    else
        printf ("Can't open file\n");

    fclose(f1);

    char str[num];
    char a = '2', b = 'A';

    for(int i=0; i<num; i++)
        {
            if(i%2 != 0)
                {
                    str[i] = a;
                    a += 2;

                    if(a>'8')
                        a = '2';
                }
            else
                {
                    str[i] = b;
                    b++;
                }
        }
    str[num] = '\0';

    fprintf(f2, "%s", str);
    fclose(f2);
    return 0;
}