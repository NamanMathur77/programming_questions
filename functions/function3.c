//Write a program to show how similar variable names can be used in different functions.
#include<stdio.h>
void fun(void);
void main()
{
int b=10,c=5;
printf("In main() B=%d and C=%d\n",b,c);
fun();
}
void fun()
{
int b=15,c=10;
printf("In the fun() function B=%d and C=%d",b,c);
}
