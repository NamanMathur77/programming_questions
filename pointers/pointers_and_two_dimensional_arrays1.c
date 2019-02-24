//Write a program to display array elements using pointer.

#include<stdio.h>
main()
{
int a[3][3]={{1,2,3},{4,5,6},{7,8,9}},*p,i,j=1;
p=&a[0][0];
for(i=0;i<9;i++)
{
printf("%d\n",*p);
p++;
}
}
