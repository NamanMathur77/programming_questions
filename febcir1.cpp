#include<bits/stdc++.h>
using namespace std;

void allPossibleSubset(int arr[],int n)
{
	int  count = pow(2,n);
    vector<int> sumarr;
    vector<int>::iterator ip;
	// The outer for loop will run 2^n times to print all subset .
	// Here variable i will act as a binary counter
	for (int i = 0; i < count; i++)
	{
		// The inner for loop will run n times , As the maximum number of elements a set can have is n
		// This loop will generate a subset
        int sum=0;
		for (int j = 0; j < n; j++)
		{
			// This if condition will check if jth bit in binary representation of  i  is set or not
			// if the value of (i & (1 << j)) is greater than 0 , include arr[j] in the current subset
			// otherwise exclude arr[j]
			if ((i & (1 << j)) > 0)
				// cout << arr[j] << " ";
                sum+=arr[j];
		}
        if(sum%2==0 && sum!=0){
            // cout<<sum;
            sumarr.push_back(sum);
        }
		// cout << "\n";
	}
    sort(sumarr.begin(),sumarr.end());
    int s=sumarr.size();
    ip = unique(sumarr.begin(),sumarr.begin()+s);
    sumarr.resize(distance(sumarr.begin(),ip));
    cout<<sumarr.size();
}
int main(){`
    int t;
    cin>>t;
    int arr[t];
    for(int i=0;i<t;i++){
        cin>>arr[i];
    }
    allPossibleSubset(arr, t);
}