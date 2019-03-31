//write a program to read a name through the keyboard. Determine the length of the string and find its equivalent ASCII codes.

#include<stdio.h>
#include<string.h>
void main()
{
char name[20],d;
printf("Enter your name");
gets(name);
d=strlen(name);
printf("Your name is %s\n",name);
printf("Your name contains %d characters\n",d);
printf("Name & its Equivalent ASCII \n");
for(int i=0;i<d;i++)
printf("%c \t\t %d\n",name[i],name[i]);
return 0;
}
