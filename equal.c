// c programme to print given number is equal or not
#include <stdio.h>
int main()
{ 
    int a,b;
    
    printf("enter an a value");
    scanf("%d",&a);
    printf("enter an b value");
    scanf("%d",&b);
    //if given two numbers are equal print equal otherwise not equal
    if(a==b)
    {
        printf("given number is eual");
    }
    else
    {
        printf("given number is not equal");
    }
    return 0;
}