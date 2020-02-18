#include<stdio.h>
main()
{
int x=0,a,b,flag,arr[1000],count=0;
scanf("%d %d",&a,&b);
for(int i=a;i<b;i++){
flag=0;
for(int j=2;j<i;j++)
{
if(i%j==0)
{
flag=1;
break;
}
}
if(flag==0)
{
arr[x]=i;
//printf("%d ",arr[x]);
x=x+1;
}
}
for(int i=0;i<x;i++)
printf("%d ",arr[i]);
for(int i=0;i<x-1;i++)
{
if(abs(arr[i]-arr[i+1])==6)
count=count+1;
}
printf("\n%d",count);
}

