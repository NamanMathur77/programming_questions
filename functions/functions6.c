//write a program to read values through the user-defined function and send back the result in the form of an address
//ERROR IN CODE
#include<stdio.h>
int main()
{
int sum(),*s;
s=sum();
printf("Sum=%d",*s);
}
int sum()
{
int x,y,z,k;
printf("\n Enter three values");
scanf("%d %d %d ",&x,&y,&z);
k=x+y+z;
return(k);
}
