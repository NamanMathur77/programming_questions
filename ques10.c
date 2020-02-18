#include<stdio.h>
main()
{
int t,i,p,arr[100],flag,count,diff;
scanf("%d",&t);
for(;t>0;t--)
{
	scanf("%d",&p);
	for(i=0;i<p;i++)
	scanf("%d",&arr[i]);
	flag=0;
	count=0;
	for(i=1;i<=p;i++)
	{	
		if(flag==0)
		{
			if(i<arr[i-1])
			{
				diff=arr[i-1]-i;
				if(diff>2)
				{
					flag=1;
					printf("Too chaotic");
					break;
				}
					
				count=count+diff;
			}
			
		}
	}
	if(flag==0)
	printf("%d",count);
}
return 0;
}
