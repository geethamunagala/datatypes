#include <stdio.h>
int main()
{
    int a = 5, c;
    float b=4.5,f;
    c = a;
    f = b;      
    printf("c = %d\n", c);
    c += a;     
    printf("c = %d\n", c);
    c -= a;     
    printf("c = %d\n", c);
    c *= a;     
    printf("c = %d\n", c);
    c /= a;     
    printf("c = %d\n", c);
    c %= a;    
    printf("c = %d\n", c);
    f += b;     
    printf("c = %f\n", f);
    f -= b;     
    printf("c = %f\n", f);
    f *= b;     
    printf("c = %f\n", f);
    f /= b;     
    printf("c = %f\n", f);
    return 0;
}

