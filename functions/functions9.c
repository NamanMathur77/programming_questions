//Write a program to return more than one value from the user-defined function.
#include<stdio.h>
main()
{
int x,y,add,sub,change(int*,int*,int*,int*);
printf("\n Enter values of X and Y:");
scanf("%d %d",&x,&y);
change(&x,&y,&add,&sub);
printf("\n Addition :%d",add);
printf("\n Subtraction :%d",sub);
return 0;
}
change(int *a,int *b,int *c, int *d){
*c=*a+*b;
*d=*a-*b;
}
