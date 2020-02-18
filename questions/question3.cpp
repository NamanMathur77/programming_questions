#include<iostream>
using namespace std;

main()
{
int inp,n=1;

cin>>inp;
int spc=0;
for(int j=0;j<inp;j++)
{
for(int i=0;i<spc;i++)
cout<<" ";
spc=inp;
for(int i=0;i<n;i++)
cout<<"*";
n=n-2;
cout<<"\n";


}}

