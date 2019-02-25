//Write a program to print the value of a variable through pointer to pointer;

#include<stdio.h>
main()
{
int a=2,*b,**c;
b=&a;
c=&b;
printf("Address of a is %u",b);
printf("Value of a is %d",*b);
printf("Value of a from pointer to pointer is %d",**c);
}
