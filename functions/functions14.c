// write a program to calculate triangular number of an entered number with recursion function method.

#include<stdio.h>
main()
{
int n,trinum(int),z;
printf("Enter the number");
scanf("%d",&n);
z=trinum(n);
printf("The triangular number is %d",z);
return 0;
}
int trinum(int a){
int tri=0;
for(int i=a;i!=0;i--)
{
tri=tri+i;
}
return tri;
}
