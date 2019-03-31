//Write a program to remove the occurence of 'The' word from the entered text.

#include<stdio.h>
#include<string.h>
void main()
{
char line1[80],line2[80];
int i,j=0,l;
printf("Enter the first line");
gets(line1);
l=strlen(line1);
for(i=0;i<l;i++)
{
if(i>=l-4 || l==3 && line1[l-4]==' ' && line1[l-3]=='t' && line1[l-2]=='h' && line1[l-1]=='e')
continue;
if(line1[i]=='t' && line1[i+1]=='h' && line1[i+2]=='e' && line1[i+3]==' ')
{
i+=2;
continue;
}
else
{
line2[j]=line1[i];
j++;
}
}
printf("\n Text with 'the' : %s",line1);
printf("\n Text without 'the' : %s",line2);
return 0;
}
