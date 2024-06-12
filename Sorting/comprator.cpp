#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool myComparator(pair<int, int>a, pair<int, int>b){
    if(a.first == b.first){ // (sort based on first element )Assending order
        if(a.second>b.second){
            return true;
        }
    }
    return a.first<a.first;
}

// method - 2 using Functors 
class myCompatr{
    public:
    bool operator() (int a, int b){
        return a>b;
    }

};
// method 3 - Lambda Expression


int main(){
    vector<int> arr { 3,2,1,6};
    // vector<pair<int, int>> vec = {{2,3}, {5,4}, {3,1},{2,8}};

    // sort(arr.begin(), arr.end());
    // sort(vec.begin(), vec.end(), myComparator);
    // sort(arr.begin(), arr.end(), myCompatr());
    // sort(begin(arr), end(arr), myCompatr());
    sort(arr.begin(), arr.end(), [](int a, int b){
        return a<b; 
    }); 
    //[] is called capture clause
    // or
    auto myLambda = [](int a, int b){
        return a>b;
    };




    // for(auto i: vec){
    //     cout<<i.first<<" : "<<i.second<<" "<<endl;
    // }
    for(auto i: arr){
        cout<<i<<" ";
    }

}
