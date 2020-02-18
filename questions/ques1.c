#include<stdio.h>
main()
{int n=80,divide(int),check(int),a,b;
//divide the number in a and b
a=divide(n);
b=n-a;
printf("%d",a);
}
int divide(int x)
{
x=x/2;
check(x);
}
int check(int y)
{
int z;
printf("I am checking");
for(int i=0;i<2;i++)
{
z=y%10;
if(z==4)
divide(y);
else
continue;
y=y/10;
}
return y;
}
