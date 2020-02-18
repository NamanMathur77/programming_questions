#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    long long int arr[n];
    for(long long int i=0;i<n;i++)
    cin>>arr[i];
    double sum=0;
    for(long long int i=0;i<n;i++){
        for(long long int j=i+1;j<n;j++){
            double dist=(sin(arr[i])*cos(arr[i]))+(sin(arr[j])*cos(arr[j]));
            sum+=dist;
        }
    }
    cout<<std::setprecision(2)<<sum;
}