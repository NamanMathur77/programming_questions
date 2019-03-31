//Write a program to delete all the occurence of vowels in a given text. Assume that the text length will be one line.

#include<stdio.h>
#include<string.h>
main()
{
char line1[80],line2[80];
int i,j=0,l;
printf("Enter the line ");
gets(line1);
l=strlen(line1);
for(i=0;i<l;i++){
if(line1[i]=='a' || line1[i]=='e' || line1[i]=='i' || line1[i]=='o' || line1[i]=='u' || line1[i]=='A' || line1[i]=='E' || line1[i]=='I' || line1[i]=='O' || line1[i]=='U')
continue;
else{
line2[j]=line1[i];
j++;
}
}
printf("\n Text with vowels :- %s",line1);
printf("\n Text without vowels :- %s",line2);
return 0;
}
