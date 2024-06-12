#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	cout<<"enter o/p"<<endl;
	int t;
	cin>>t;
	while(t--){
	    int n, k, l;
	    cin>>n>>k>>l;
	    

	   vector<int>arr;
	   for(int i=0; i<n; i++){
	       int a;
	       cin>>a;
	       arr.push_back(a);
	   }
	   
	   
	    
	    //code here
	    int ans = 0;
        sort(arr.begin(), arr.end());
       
        reverse(arr.begin(), arr.end());
	     for(auto &i: arr){
            // cout<<i;
        }
	    for(int i=l-1; i<n; i=i+k){
	        ans+=arr[i];
			// cout<<ans;
	    }
	    
	    
	    cout<<ans<<" "<<endl;

	    
	}
	return 0;
}
