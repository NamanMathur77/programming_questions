//Write a program to send a value by reference to the user-defined function
#include<stdio.h>
int main()
{
int x,y;
printf("Enter values of x and y\n");
scanf("%d %d",&x,&y);
change(&x,&y);
printf("In main() x=%d and y=%d",x,y);
return 0;
}
int change(int *a,int *b)
{
int k,*x=a,*y=b;
k=*x;
*x=*y;
*y=k;
printf("\n In change() x=%d and y=%d",*x,*y);
}
