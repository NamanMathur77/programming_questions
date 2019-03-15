//Write a program to send a value by reference to the user-defined function
//ERROR IN CODE
#include<stdio.h>
int main()
{
int x,y,change(int*, int*);
printf("Enter values of x and y\n");
scanf("%d %d",&x,&y);
change(&x,&y);
printf("In main() x=%d and y=%d",x,y);
}
change(int *a,int *b)
{
int *k;
*k=*a;
*a=*b;
*b=*k;
printf("\n In change() x=%d and y=%d",*a,*b);
}

