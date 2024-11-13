#include <stdio.h>
#include <string.h>
#define  N 1001

int main()
{
    FILE *f1, *f2;
    char str[N], buffer[N], c;
	int i = 0, count = 0;

    f1 = fopen("input.txt","r");
    f2 = fopen("output.txt","w");

    fgets(str, N, f1);
	fclose(f1);

    if(f1 != NULL){
        while ((c=fgetc(f1)) != '\0')
            if(c == ' ')
            {
                if(count < i)
                {
                    buffer[++i] = '\0';
                    str[N] = buffer[i];
                    count = i;
                }
                i = 0;
            }
            buffer[i++] = c;
    }
    else
        printf ("Can't open file\n");

	fprintf(f2, "%s", str);
	fclose(f2);

	return 0;
}