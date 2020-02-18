#include<iostream>
using namespace std;
class stu{
    int id;
    char name[20];
    public:
    void readstu();
    void showstu();
};
void stu::readstu(){
    cout<<"Enter the id and the name of student";
    cin>>id>>name;
}
void stu::showstu(){
    cout<<id<<name;
}
int main(){
    stu s1;
    s1.readstu();
    s1.showstu();
}