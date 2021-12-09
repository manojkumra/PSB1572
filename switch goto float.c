#include<stdio.h>
int main()
{
   float a,b,c,d,e,f;
   int ch;
   printf("enter two numbers:");
   scanf("%f%f",&a,&b);
   printf("enter the choice:");
   scanf("%d",&ch);
   switch(ch)
   {
       addition:
       case 1:
       c=a+b;
       printf("%f",c);
       break;
       substraction:
       case 2:
       d=a-b;
       printf("%f",d);
       break;
       multiplication:
       case 3:
       e=a*b;
       printf("%f",e);
       division:
       case 4:
       e=a/b;
       printf("%f",e);
       break;
       case 5:
       goto multiplication;
       break;
       default:
       printf("invalid input");
   }
}
      
     
