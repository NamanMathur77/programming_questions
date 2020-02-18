#include<stdio.h>
main()
{
int i, yearbyfour, yearbyhund, yearbyfourhund, year;
printf("Enter the year");
scanf("%d",&year);
yearbyfour=(year>>2)<<2;
if(yearbyfour==year)
{
//check if it is divisible by 100
//if it is divisible by 100 it may not be a leap year
yearbyhund=year%100;
if(yearbyhund == 0)
{
	yearbyfourhund=year%400;
	if(yearbyfourhund==0)	
	printf("It is a leap year");
	else
	printf("It is not a leap year");
}
else
printf("It is a leap year");
}
else
printf("It is not a leap year");
return 0;
}
