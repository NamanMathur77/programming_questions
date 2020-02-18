#include<stdio.h>
main()
{
int n,cut,i,arr[100];
scanf("%d",&n);
scanf("%d",&cut);
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
for(i=cut;i<n;i++)
printf("%d",arr[i]);
for(i=0;i<cut;i++)
printf("%d",arr[i]);
return 0;
}
