//write a program to display elements of an array, start elements counting from 1 insteed of 0

#include<stdio.h>
main()
{
int x[]={2,4,6,8,10},k=1;
while(k<=5)
{
printf("%3d",x[k-1]);
k++;
}
}
