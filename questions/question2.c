//Consider the following series : 1,1,2,3,4,9,8,27,16,81,32......
//This series is a mixture of 2 series, all the odd terms in this series form a GP and all the even terms form yet another GP. Write a program to find the Nth term in the series.

#include<stdio.h>
main()
{
int n,num,i,ans=1;
printf("Enter the number");
scanf("%d",&n);
//check if the number is even or odd
if(n%2==0)
{ //number is even
	num=n/2;
	for(i=1;i<num;i++)
	{
		ans=ans*3;
	}
printf("%d",ans);
}
else
{ //number is odd
	num=n/2+1;
	for(i=1;i<num;i++)
	{
		ans=ans*2;
	}
printf("%d",ans);
}
return 0;
}

