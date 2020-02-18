//Given an array of is and 0s your task is to separate 1s and 0s. eg if array is [01010], output should be [00011].

#include<stdio.h>
main()
{
int n,arr[100],zero=0,one=0;
printf("Enter the number of elements");
scanf("%d",&n);
printf("Enter the array");
for(int i=0;i<n;i++){
	scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++){
	if(arr[i]==0)
		zero++;
	else
		one++;
}
for(int i=0;i<zero;i++)
{
	printf("0");
}
for(int i=0;i<one;i++)
{
	printf("1");
}
return 0;
}
