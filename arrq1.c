#include<stdio.h>
main()
{
int t,test,n,given,i,j,flag=1,sum=0,a[100];
scanf("%d",&t);
for(test=t;test>0;test--)
{
flag=1;

scanf("%d",&n);

scanf("%d",&given);

for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
	if(flag==1)
	{
		sum=sum+a[i];
		for(j=i+1;j<n;j++)
		{
			sum=sum+a[j];
			if(sum==given)
			{

				printf("%d %d",i+1,j+1);
				flag=0;
			}
		}
	}
	sum=0;
}
}
return 0;
}
