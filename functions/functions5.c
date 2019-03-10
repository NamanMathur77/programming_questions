// Write a program to use the return statement in different ways.
#include<stdio.h>
void main()
{
int pass(int);
int x,y;
printf("Enter the value of x:");
scanf("%d",&x);
if(x==1 || x<0)
return 0;
y=pass(x);
switch(y)
{
case 1:
printf("The value returned is %d",y);
break;
default:
printf("The cube of %d is : %d",x,y);
}
}
int pass(a)
{
if(a==0)
return 0;
else
return(a*a*a);
}
