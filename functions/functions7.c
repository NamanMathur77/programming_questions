//write a program to send values by the call by value
#include<stdio.h>
main()
{
int x,y,change(int,int);
printf("Enter values of x and y");
scanf("%d %d",&x,&y);
change(x,y);
printf("In main() x=%d and y=%d",x,y);
}
change(int s,int t)
{
int k;
k=s;
s=t;
t=k;
printf("\n In change() x=%d and y=%d",s,t);
}
