#include<stdio.h>
#include<math.h>
int power(int a,int b)
{
    int z;
    z=pow(a,b);
    return z;

}
int main()
{
    int x,y,k;
    printf("enter the base and exponent");
    scanf("%d %d",&x,&y);
    k=power(x,y);
    printf("%d",k);
}
