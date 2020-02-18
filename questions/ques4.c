#include<stdio.h>
main()
{
int n,arr[100],arr2[100],i,k=0;
printf("Enter the size of array");
scanf("%d",&n);
printf("Enter the array");
for(int i=0;i<n;i++){
	scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++){
	if(arr[i]==0){
		arr2[k]=arr[i];
		k++;
	}
	else
		continue;
}
for(int i=0;i<n;i++){
	if(arr[i]==1){
		arr2[k]=arr[i];
		k++;
	}
	else
		continue;
}
for(int i=0;i<n;i++)
	printf("%d",arr2[i]);
return 0;
}
