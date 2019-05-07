//Write a method to replace all spaces in a string with '%20'.

/* In this question I have used the backward approach.
1. We firstly get the total length of the string and count the spaces in the string
2. Then we calculate the index of the resulting string which would be originalLength+spaces*2 This would change according to the repacing string in the question.
3. Then we start the loop through original string from backward and if we encouter a space then replace it with 0 and next two entries with 2 and %.
4. Else if no space then copy the string as it is. */

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
char value;
char str[20]="my name is";
int j=0,space=0,index;
int length=strlen(str);
for(int i=0;i<length;i++)
{
value=str[i];
if(value==' ')
space++;
else
continue;
}
index=length+space*2;
for(int i=length;i>=0;i--)
{
if(str[i]==' '){
str[index]='0';
str[index-1]='2';
str[index-2]='%';
index=index-3;
}
else{
str[index]=str[i];
index=index-1;
}
}
for(int i=0;i<strlen(str);i++)
cout<<str[i];
return 0;
}
