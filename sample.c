#include<stdio.h>
#include<string.h>
main()
{
char mag[100];
char magwords[10][10];
int i,j,cnt;
printf("Enter the magazine string");
gets(mag);
j=0;
cnt=0;
for(i=0;i<=strlen(mag);i++)
{
if(mag[i]==' ' || mag[i]=='\0')
{
magwords[cnt][j]='\0';
cnt++;
j=0;
}
else
{
magwords[cnt][j]=mag[i];
j++;
}
}
for(i=0;i<cnt;i++)
printf("%s \n",magwords[i]);
return 0;
}
