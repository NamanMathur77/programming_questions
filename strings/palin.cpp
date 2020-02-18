#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    char c;
    cout<<"ENter the character to remove";
    cin>>c;
    string res;
    int j=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==c){
            continue;

        }
        else{
            res=res+s[i];
            j=j+1;
        }
    }
    cout<<res;
}