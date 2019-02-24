//Write a program to copy one array into another array. The order of elements of the second array should be opposite of the first array.

#include<stdio.h>
main()
{
int a[5]={2,4,6,8,10},b[5],k=0;
while(k<=4)
{
b[k]=*(a+4-k);
k++;
}
k=0;
while(k<=4)
{
printf("%d\n",*(b+k));
k++;
}
}
