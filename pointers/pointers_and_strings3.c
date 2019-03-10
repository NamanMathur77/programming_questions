//write a program to read two strings through the keyboard. Compare these two strings character by character. Display the similar character found in both the strings and count the number of dissimilar characters.
#include<stdio.h>
#include<string.h>
main()
{
char str1[20], str2[20], *a, *b;
int c=0, l=0;
printf("Enter the first string");
gets(str1);
printf("Enter the second string");
gets(str2);
a=str1;
b=str2;
printf("\n Similar characters found in both strings");
while(*a!='\0')
{
if(*a==*b)
{
printf("\n \t%c \t%c",*a,*b);
l++;
}
else 
c++;
a++;
b++;
}
if(c==0)
printf("The strings are identical");
else
printf("\n The strinsgs are different at %d places.",c);
printf("\n The string Characters are similar at %d places",l);
}

