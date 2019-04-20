//write a program to know whether the entered character string is palindrome or not.

#include<stdio.h>
#include<string.h>
void main(){
char name[20],revName[20],j=0,l,test,i=0;
printf("Enter your name");
gets(name);
l=strlen(name)-1;
while(i<=l)
{
if(name[i]==name[l])
test=1;
else{
test=0;
break;}
i++;
l--;
}
if(test==1)
printf("it is a palindrome name");
else
printf("it is not a palindrome name");
}
