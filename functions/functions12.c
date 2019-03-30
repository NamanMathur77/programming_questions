//write a program to evaluate the equation y=x+x^2+x^3+x^4+ .......+x^n using functions.

#include<stdio.h>
int main()
{
int power(int, int),x,n,y=0,z;
printf("Enter the value of x");
scanf("%d",&x);
printf("Enter the value of n");
scanf("%d",&n);
while(n!=0){
z=power(x,n);
n=n-1;
y=y+z;
}
printf("Value of y is %d",y);
return 0;
}
int power(int a, int b)
{
int s=a;
for(int i=1;i<b;i++)
{
 s=s*a;
}
printf("Value of %d to the power %d is %d\n",a,b,s);
return s;
}
