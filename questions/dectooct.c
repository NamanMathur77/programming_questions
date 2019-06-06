#include<stdio.h>
main()
{
int input,i,j,k,resultoct=0,resulthex;
//input the decimal number
printf("Enter the decimal number");
scanf("%d",&input);
i=1;
printf("%X\n",input);
//convert to oct
while(input!=0)
{
resultoct=resultoct+(input%8)*i;
i=i*10;
input=input/8;
}
printf("%d",resultoct);
return 0;
}
