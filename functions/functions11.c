// Write a program to use two functions as arguments for another function.

#include<stdio.h>
#include<math.h>
int main()
{
int d,x(int,int),y(),z();
d=x(y(),z()); 
printf("\n z() - y() =%d",d);
return 0;
}

int x(int a,int b){
return(abs(a-b));
}

int y(){
int y;
printf("\n Enter first number:");
scanf("%d",&y);
return y;
}

int z(){
int z;
printf("\n Enter Second Number:");
scanf("%d",&z);
return z;
}
