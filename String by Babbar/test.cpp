#include <iostream>
using namespace std;

int main() {
	// your code goes here

	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    char s[n];
	    for(int i=0; i<n; i++){
	        cin>>s[i];
	    }
	    
        bool isCountable;
	    for(int i=0; i<n; i++){
        

            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                continue;
                isCountable = 1;
            }
            else{
                for(int i=0; i<4; i++){
                    if(s[i]!='a' || s[i]!='e' || s[i]!='i' || s[i]!='o' || s[i]!='u'){
                        
                        isCountable = false;
                    }
                    else{
                        //countable
                        isCountable = true;
                    }
                }
            }
	        
	    }
        if(isCountable == true){
            cout<<"Yes";
        }
        else{
            cout<<"No";
        }
	    
	    
	    
	}
	return 0;
}
