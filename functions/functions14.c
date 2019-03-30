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
if(a==0){
return tri;
}
else{
tri=tri+a+trinum(a-1);
}
return tri;
}
