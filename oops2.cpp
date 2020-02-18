#include<iostream>
#include<string.h>
using namespace std;
class employee{
    int empid;
    string empname;
    int salary;
    public:
    void enteremp(int id,string name, int basic);
    void display();
};
void employee::enteremp(int id,string name, int basic){
    empid = id;
    empname=name;
    salary = basic;
}
void employee::display(){
    cout<<empid<<empname<<salary;
}
int main(){
    employee e1;
    string name="naman";
    e1.enteremp(1,name,78);
    e1.display();

}