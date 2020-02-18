#include<iostream>
using namespace std;
class Node{
public:
int data;
Node next;
};
int main()
{
Node first, second,third;
first.data=1;
first.next=second;
second.data=5;
second.next=third;
third.data=6;
third.next=NULL;
}

