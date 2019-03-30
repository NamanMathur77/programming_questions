//write a program to call main() function recursively and perform the sum of one to five numbers.

#include<stdio.h>
int x,s;
void main(int);
void main(x)
{
s=s+x;
printf("\n x=%d s=%d",x,s);
if(x==5)
exit(0);
main(++x);
}
