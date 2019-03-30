//Write a program to calculate factorial of a given number using recursion.
#include<stdio.h>
int main()
{
int fact(int),n,z;
printf("Enter the number you want factorial of");
scanf("%d",&n);
z=fact(n);
printf("Factorial is %d",z);
return 0;
}
int fact(int a){
int ans=1;
if(a==0)
return ans;
else
ans=ans*a*fact(a-1);
return ans;
}
