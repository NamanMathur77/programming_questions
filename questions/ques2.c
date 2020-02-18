#include<stdio.h>
#include<string.h>
main()
{
char name[20];
int len;
printf("Enter the name");
scanf("%s",name);
len= strlen(name);
printf("%d",len);
for(int i=0; i<len; i++)
{
printf("%c",&name+i);
}
return 0;
}
