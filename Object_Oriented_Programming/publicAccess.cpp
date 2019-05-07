#include<iostream>
using namespace std;
class Student
{
public:
int rollno;
};
int main()
{
Student A;
Student B;

A.rollno = 1;

B.rollno = 2;

cout<<" roll no of A "<<A.rollno;
cout<<" roll no of B "<<B.rollno;

return 0;

}
