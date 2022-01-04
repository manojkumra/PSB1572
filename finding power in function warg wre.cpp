#include<stdio.h>
#include<math.h>
int power()
{
    int a,b,c;
    printf("enter the base and exponent");
    scanf("%d %d",&a,&b);
    c=pow(a,b);
    return c;
}
int main()
{
    int x,y,z;
    z=power(x,y);
    printf("%d",z);
}
    
