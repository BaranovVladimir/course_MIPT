#include <stdio.h>
#include <string.h>
#define  N 10001

int main()
{
    FILE *f1, *f2;
    char str[N];
	int low = 0, up = 0;

    f1 = fopen("input.txt","r");
    f2 = fopen("output.txt","w");

    fgets(str, N, f1);
	fclose(f1);

	for (int i=0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			low++;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			up++;
	}

	fprintf(f2, "%d %d\n", low, up);
	fclose(f2);

	return 0;
}