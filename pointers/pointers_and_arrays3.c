//Write a program to access elements of an array through different ways using a pointer

#include<stdio.h>
main()
{
int a[5]={2,4,6,8,10},k=0;
printf("Element No. \t Element \t Element Address\n");
while(k<=4)
{
printf("a[%d] \t %d \t %u\n",k,a[k],a+k);
printf("a[%d] \t %d \t %u\n",k,*(a+k),a+k);
printf("a[%d] \t %d \t %u\n",k,*(k+a),a+k);
printf("a[%d] \t %d \t %u\n",k,k[a],a+k);
k++;
}
}


