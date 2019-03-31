//Write a program to enter names of cities and display all the elements names alphabetically.

#include<stdio.h>
#include<string.h>
void main()
{
char city[5][20];
int i,j;
printf("Enter names of the cities");
for(i=0;i<5;i++)
scanf("%s",city[i]);
printf("Sorted List of Cities");
for(i=65;i<=122;i++)
{
for(j=0;j<5;j++)
{
if(city[j][0]==i)
printf("%s",city[j]);
}
}
return 0;
}
