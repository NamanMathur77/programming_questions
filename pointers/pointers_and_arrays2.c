#include<stdio.h>
main()
{
int x[5]={2,4,6,8,10},k=0;
printf("Elements No. \t Element \t Element Address\n");
while(k<=4)
{
printf("x[%d] \t %d \t %u\n",k,*(x+k),x+k);
k++;
}
}
