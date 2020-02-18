#include<stdio.h>
main()
{
int n,arr[100],count,i,t;
scanf("%d",&t);
while(t!=0){
scanf("%d",&n);
for(int i=0;i<n-1;i++)
{
scanf("%d",&arr[i]);
}
count=arr[0];
for(int i=0;i<n;i++)
{
if(count!=arr[i]){
printf("%d",count);
break;
}
count=count+1;
}
t=t-1;
}
return 0;
}
