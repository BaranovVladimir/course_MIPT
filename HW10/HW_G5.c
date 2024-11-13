#include <stdio.h>
#define N 1001

int main(void){
    FILE *f1, *f2;
    int i = 0;
    char str[N];

    f1 = fopen("input.txt","r");
    f2 = fopen("output.txt","w");

    fgets(str, N, f1);
    fclose(f1);

    while(str[i] != '\0')
	{
		if(str[i] == 'a' || str[i] == 'A')
			str[i]++;
		else if(str[i] == 'b' || str[i] == 'B')
			str[i]--;
		i++;
	}

    fprintf(f2, "%s ", str);
    fclose(f2);
    return 0;
}