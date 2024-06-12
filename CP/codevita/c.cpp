#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;

bool isOperation(string s){
    if(s=="add" || s =="sub" || s=="mul" || s=="rem" || s =="pow"){

    }
}

void solve(string s, string &ans){
    if(isOperation(s)){
        
    }

}

int main(){

    char s[100];
    cin.getline(s, sizeof(s));

    // cout<<s[1];

    // string value[10] = {"zero", "one", "two","three","four","five","six","seven","eight","nine"};
    
    string ans= "";

    // for(int i=1; i<=99; i++){
    //     string temp = s[i];
    //     solve(temp, ans);
    // }
    // for(int i=1; i<=sizeof(s); i++){
        string temp ="";
        int i =0;
        while(s[i]!=' '){
            temp +=s[i];
            i++;
            cout<<temp;
        }

        

    // }


   

    
    return 0;
}

