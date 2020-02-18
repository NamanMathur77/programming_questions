#include<stdio.h>
main()
{
int i=13,j;
j=(i>>1)<<1;
if(i==j)
printf("yes");
else
printf("no");
return 0;
}
