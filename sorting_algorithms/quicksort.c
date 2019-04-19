#include<stdio.h>
void quicksort(int arr[],int L, int R)
{
int i=L,j=R-1;
int tmp;
int pivot=arr[R];
while(i<=j)
{
	while(arr[i]<pivot)
		i++;
	while(j>-1 && arr[j]>pivot)
		j--;
	if(i<=j){
		tmp=arr[i];
		arr[i]=arr[j];
		i++;
		j--;
		}
}
tmp=arr[i];
arr[i]=arr[R];
arr[R]=tmp;
if(L<i-1)
	quicksort(arr,L,i-1);
if((i+1)<R)
	quicksort(arr,i+1,R);
}
main()
{
int arr[100],n,i;
printf("Enter the value of n");
scanf("%d",&n);
for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
quicksort(arr,0,n-1);
for(int i=0;i<n;i++)
printf("%d",arr[i]);
return 0;
}
