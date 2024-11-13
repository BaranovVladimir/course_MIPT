#include <stdio.h>

int main(int argc, char **argv)
{
	int a;
	int flag = 0;

    scanf("%d", &a);

	while (a != 0){
        if (flag == 1)
            break;

		int last = a % 10;
       	int prelast = a / 10;
        while (prelast != 0){
            if (last == (prelast % 10)){
            flag = 1;
            break;
            }
            prelast /= 10;
        }
		a /= 10;
    }     
        
    
    printf("%s", flag == 1 ? "YES" : "NO");
        return 0;
}