#include<iostream>
using namespace std;
class Student
{
	private:
		int rollno;
	
public:
		int getrollno()
		{
			return rollno;
		}
		int setrollno(int i)
		{
			rollno=i;
		}
};
int main()
{
Student A;
A.setrollno(1);
cout<<A.getrollno();
return 0;
}
