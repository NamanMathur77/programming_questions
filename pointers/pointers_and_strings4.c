//Write a program to enter threee characters using pointers. Use the memcmp() function for comparing the three characters. In case the entered characters are the same display the message 'the characters are the same', otherwise indicate their appearance before or after one another or display the status of characters in alphabetic.(The memcmp() function compares a specified number characters from two buffers.)
#include<stdio.h>
#include<string.h>
#include<sys/stat.h>
#include<unistd.h>
#include<sys/types.h>
main()
{
char a,b;
int stat;
a="h";
b="h";
stat=memcmp(a,b,1);
printf("%c",a);
}
