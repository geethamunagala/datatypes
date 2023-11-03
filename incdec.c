#include <stdio.h>
int main()
{
    int a = 10, b = 50;
    float c = 10.5, d = 6.5;
    double e=5,f=8;
    printf("++a = %d \n", ++a);
    printf("a++ = %d \n", a++);
    printf("--b = %d \n", --b);
    printf("b-- = %d \n", b--);
    printf("++c = %f \n", ++c);
    printf("--d = %f \n", --d);
    printf("++e = %lf \n",++e);
    printf("--f = %lf \n",--f);
    return 0;
}