//Write a program to define a user-defined function. Call them at different places.
#include<stdio.h>
void y();
void y()
{
printf("Y");
}
void main()
{
void a(),b(),c(),d();
y();
a();
b();
c();
d();
}
void a()
{
printf("A");
y();
}
void b()
{
printf("B");
a();
}
void c()
{
a();
b();
printf("C");
}
void d()
{
printf("D");
c();
b();
a();
}
