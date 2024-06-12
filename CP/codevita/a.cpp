#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int solve(string tbsi, string rem, string org, string rev, int rf, int s, int r, int ans){

    if(rem.size()==0){
        return ans;
    }
    int count = 0;
    int i=0;
cout<<"call hua";
    while(i<tbsi.size()){
        if(rem[0]==tbsi[i]){
            int j=1; 
            int tempcount = 0;
            while(rem[j]==tbsi[i+j]){
                j++;
                tempcount++;
            }
            tempcount++;
            count = max(count, tempcount);
        }
        i++;
    }
    if(count==0){
        return INT_MAX;
    }
    int k =0;
    string news;
    while(k<rem.size()-count){
        news=news+rem[i+count];
        
    }
    return min(solve(org, news,org, rev, s,s,r,ans+rf*count),solve(rev, news, org, rev, r ,s, r, ans+rf*count));
}
void reverseStr(string& str)
{
    int n = str.length();
 
    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}

int main(){
    int s,r;
    string x,y;
    cin>>x>>y;
    cin>>s>>r;
    string rev = x;
    reverseStr(rev);
    

    cout<<min(solve(y, x,x, rev, s,s,r,0),solve(rev, x, x, rev, r ,s, r, 0));
    return 0;
}