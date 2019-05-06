//Implement an algorithm to determine if a string has all unique characters.

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
bool arr[128];
int value;
char greetings[]="abcde";
//firstly initialize the boolean array as all false
for(int i=0;i<128;i++)
arr[i]=false;
for(int i=0;i<strlen(greetings);i++){
value=(int)greetings[i];
//for each value in the string check if the value at that particular space in the array is true, if it is already true then duplicacy exist else set that space in the array as true.
if(arr[value])
cout<<"Duplicacy Exist"<<arr[value];
else
arr[value]=true;
}
//print the values
for(int i=0;i<128;i++)
cout<<i<<arr[i]<<"\n";
return 0;
}
