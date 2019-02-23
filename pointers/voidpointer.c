#include<stdio.h>
int p;
float d;
char c;
void *pt=&p;
void main()
{
*(int *) pt=12;
printf("\n p = %d",p);
pt=&d;
*(float *) pt=2.2;
printf("\n d= %f",d);
pt=&c;
*(char *) pt='S';
printf("\n c= %c",c);
}
