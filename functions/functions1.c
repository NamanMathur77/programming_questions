//write a program to show how user-defined function is called
#include<stdio.h>
int add(int, int);
void main()
{
int x=1,y=2,z;
z=add(x,y);
printf("z=%d",z);
}
int add(int a, int b)
{
return(a+b);
}
