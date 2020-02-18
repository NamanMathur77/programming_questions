//Given an array,A of N integers, print each element in reverse order as a single line of space-separated integers.
#include<stdio.h>
main()
{
int n,i,arr[100];
printf("ENter the size of array");
scanf("%d",&n);
printf("Enter the array elements");
for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
for(i=(n-1);i>=0;i--)
	printf("%d",*arr+i);
return 0;
}r
