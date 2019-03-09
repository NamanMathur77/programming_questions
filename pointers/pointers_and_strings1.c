#include<stdio.h>
main()
{
char name[15],*ch;
printf("Enter your name");
gets(name);
ch=name;
while('\0')
{
printf("%c",*ch);
ch++;
}
}
