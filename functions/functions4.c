// Write a program to show the effect of global variable on different functions.
#include<stdio.h>
void fun(void);
int b=10,c=5;
void main()
{
printf("Inside main() B=%d and C=%d",b,c);
fun();
b++;
c--;
printf("\n Again in main() B=%d and C=%d",b,c);
}
void fun()
{
b++;
c--;
printf("\n In fun() B=%d and C=%d",b,c);
}
