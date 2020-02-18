#include<bits/stdc++.h>
using namespace std;
stack<int> s1,s2;
int enqueue(int x){
    while(!s1.empty()){
        s2.push(s1.top());
        s1.pop();
    }
    s1.push(x);
    while(!s2.empty()){
        s1.push(s2.top());
        s2.pop();
    }
}

int dequeue(){
    if(s1.empty()){
        cout<<"Queue is empty";
    }
    else{
        cout<<s1.top();
        s1.pop();
    }
}

int main(){
    enqueue(1);
    enqueue(2);
    enqueue(3);
    dequeue();
    dequeue();

}