#include<stdio.h>
#include<math.h>
void power()
{
    int x,y,z;
    printf("enter the base \n");
    scanf("%d",&x);
    printf("enter the exponent\n");
    scanf("%d",&y);
    z=pow(x,y);
    printf("%d",z);
}
void main()
{
    power();
}
