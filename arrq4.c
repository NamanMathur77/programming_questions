#include<stdio.h>
main()
{
int test,t,sizeofarray,a[100],i,j,flag;
scanf("%d",&t);
for(test=t;test>0;test--)
{
scanf("%d",&sizeofarray);
for(int i=0;i<sizeofarray-1;i++)
{scanf("%d",&a[i]);
}
flag=1;
j=0;
for(i=1;i<=sizeofarray;i++)
{
if(flag==1){
if(i!=a[j])
{printf("%d\n",i);
flag=0;
}
j++;
}
}
}
return 0;
}
