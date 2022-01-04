#include<stdio.h>
#include<math.h>
int power(int a,int b)
{
    int z;
    z=pow(a,b);
    printf("%d",z);

}
int main()
{
    int x,y,m;
    printf("enter the base and exponent");
    scanf("%d %d",&x,&y);
    power(x,y);
}
