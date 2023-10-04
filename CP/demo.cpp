#include<bits/stdc++.h>
using namespace std;
int main(){
    
    unordered_map<int,int>map;

    map[1] = 4;
    map[3] = 5;

    int max = INT_MIN;
    for(auto i: map){
        // cout<<i.second;
        if(i.second>max){
            max = i.second;
        }
    }
    cout<<max;

    return 0;
} 