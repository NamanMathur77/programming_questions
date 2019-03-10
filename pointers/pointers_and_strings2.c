#include<stdio.h>
main()
{
char str[20],*s;
int p=0,q=0;
printf("Enter the String");
gets(str);
s=str;
while(*s!='\0')
{
printf("%c",*s);
p++;
s++;
if(*s==32)
q++;
}
printf("\n Length of the string including spaces %d ",p);
printf("\n Length of the string excluding spaces %d ",p-q);
}
