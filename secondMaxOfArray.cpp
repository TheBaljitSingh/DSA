#include<iostream>
#include<vector>
using namespace std;


// i have writed code for find second largest element in array using Vector(vector stack ke jaisa kam karta hai?)
int main()
{  int n=6;
   int Arr[n] = {12, 35, 1, 10, 34, 1};
   vector<int> ans;
   int max= Arr[0];
    for(int i=0; i<n-1; i++){
	        if(Arr[i]>max){
	            max = Arr[i];
	            
	           ans.push_back(max); // then it will print maximun element in the entire array.
	        }
	        
	}
    for(int i=0; i<n-1; i++){
        if(Arr[i]<ans.front()){
            max=Arr[i];
            ans.push_back(max);

        }
    }


        cout<<ans.front();
        cout<<ans.back();  // ye use karo
    return 0;
}