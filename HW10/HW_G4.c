#include <stdio.h>
#define N 100

int main(void){
    FILE *f1, *f2;
    int count1 = 0, count2 = 0;
    char str1[N], str2[N], result[37];

    f1 = fopen("input.txt","r");
    f2 = fopen("output.txt","w");

    fscanf(f1, "%s %s", str1, str2);
    fclose(f1);

    for(int i=0; str1[i] != '\0'; i++)
        {
            for(int j=1; str1[j] != '\0'; j++)
            {
                if(str1[i] == str1[j])
                    count1++;
            }

            for(int k=0; str2[k] != '\0'; k++)
            {
                if(str1[i] == str1[k])
                count1++;
            }

            if(count1 == 1)
                result[]


        }









    // fseek(f1, -1, SEEK_END);
    // // last = fgetc(f1);
    // end = ftell(f1);
    // fseek(f1, 0, SEEK_SET);

    //char str1[N];

    // while ((c=fgetc(f1)) != EOF)
    // {
    //     for(c != ' '; i++)
    //         str1[i] = c;

    // }
    //     str1[i++] = c;
    // i++;
    
    

    


    
    //printf("%c ", last);
    printf("%d", end);
    printf("%d", i);

    // for(int i=0; i<n-1; i++)
    //     {
    //         if(str[i] == last)
    //             fprintf(f2, "%d ", i);
    //     }
    fprintf(f2, "%s ", str1);
    fprintf(f2, "%s", str2);
    fclose(f2);
    return 0;
}