//write a program to read values through the user-defined function and send back the result in the form of an address
//ERROR IN CODE
#include<stdio.h>
int main()
{
int *s, *sum();
s=sum();
printf("Sum=%d",*s);
}
int *sum()
{
int x=10,y=10,z=10,*k;
k=&x;
*k=*k+y+z;
return(k);
}
