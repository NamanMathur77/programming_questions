//Write a program to display array elements. Use array name itself as a pointer.

#include<stdio.h>
main()
{
int a[][3]={{1,2,3},{4,5,6},{7,8,9}},k=0;
for(k=0;k<9;k++)
printf("%u\n",a[0][0]+k);
}
