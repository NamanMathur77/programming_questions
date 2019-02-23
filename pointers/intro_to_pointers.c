//sum of integers with pointers

#include<stdio.h>
main()
{
int a,b,sum;
int *pa,*pb;
printf("enter the value of a");
scanf("%d",&a);
printf("enter the value of b");
scanf("%d",&b);
pa=&a;
pb=&b;
sum=*pb + *pa;
printf("Sum of a and b is %d",sum);
}
