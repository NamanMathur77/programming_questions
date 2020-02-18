#include<stdio.h>
main()
{
int n,arr[100],cut;
printf("Enter the number of elements in the array");
scanf("%d",&n);
printf("Enter the elements");
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
printf("Enter the number from which we have to cut");
scanf("%d",&cut);
for(int i=(n-cut);i<n;i++)
{
	printf("%d",arr[i]);
}
for(int i=0;i<(n-cut);i++)
{
	printf("%d",arr[i]);
}
return 0;
}
