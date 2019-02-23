//Write a program to find the sum of all elements of an array. Use array name itself as a pointer.

#include<stdio.h>
main()
{
int a[5]={2,4,6,8,10},k=0,sum=0;
while(k<=4)
{
sum=sum+*(a+k);
k++;
}
printf("Sum of array=%d",sum);
}
