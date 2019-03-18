//write a program to pass arguments to the user-defined function by value and reference.
#include<stdio.h>
main()
{
int a=10,b=20,other(int, int*);
printf("The address of a and b are %d %d",&a,&b);
other(a,&b);
}
other(int x,int *y){
printf("Address inside other is %d and %d",&x,y);
}

