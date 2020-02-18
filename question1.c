#include<stdio.h>
main()
{
int arr[100],n,i,num,j,test;
scanf("%d",&test);
for(int t=0;t<test;t++){
printf("ENter the number of doors");
scanf("%d",&n);
//initialize the doors to 0
for(int i=1;i<=n;i++)
arr[i]=0;
for(i=1;i<=n;i++)
{	
	num=i;
	for(j=1;j<=n;j++)
		{
			if(j%num==0)
			{
				if(arr[j]==0)
				arr[j]=1;
				else
				arr[j]=0;
			}
		}
}
for(j=1;j<=n;j++)
printf("%d",arr[j]);
}
return 0;
}
