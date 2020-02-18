#include<stdio.h>
main()
{
int arr[100]={0},n,i,binarynum[100]={0};
scanf("%d",&n);
i=0;
while(n>0)
{
arr[i]=n%2;
n=n/2;
i=i+1;
}
int x=0;
for(int j=i-1;j>=0;j--)
arr[j]=binarynum[x];
x=x++;
}
