#include <stdio.h>

int main(int argc, char **argv)
{
    int a;
    
    scanf("%d", &a);
    printf("%s\n", 2<a && a<6 ? "spring" : 5<a && a<9 ? "summer" : 8<a && a<12 ? "autumn" : "winter");
    return 0;
}