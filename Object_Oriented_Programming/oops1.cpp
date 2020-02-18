#include<iostream>
using namespace std;
class stu
{
	int rollno;
	char name[10];
	public:
	void setrollno();
	void getrollno();
};
void stu :: setrollno(){
cout<<"ENter the roll no";
cin>>rollno;
}
void stu :: getrollno(){
cout<<rollno;
}
//void stu :: getrollno(){
//cout<<rollno;
//}
main()
{
stu s1;
s1.setrollno();
s1.getrollno();
return 0;
}
