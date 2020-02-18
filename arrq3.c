#include<stdio.h>
int max(int a,int b)
{
	if(a>b)
	{return a;}
	else
	{return b;}
}
int main(){
int t,test,i,localsum,globalsum,a[100],n;
scanf("%d",&t);
for(test=t;test>0;test--)
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	localsum=a[0];
	globalsum=a[0];
	for(i=0;i<n;i++)
	{
		localsum=max(localsum,localsum+a[i]);
		globalsum=max(globalsum,localsum);
	}
	printf("%d",globalsum);
}
return 0;
}
