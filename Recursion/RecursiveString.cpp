#include<iostream>
#include <bits/stdc++.h>
#include<string>
using namespace std;


//pass by reference
void reverseString(string& s,int i){

    cout<<"Call recieved for "<<s<<endl;
    int j = s.size()-i-1; 
    if(i>j){  
        return;
    }
    swap(s[i],s[j]);

    return reverseString(s, i+1);


    // int l = 0;
    // int h = s.size()-1;

    // while(l<h){
    //     swap(s[l],s[h]);
    //     l++;
    //     h--;

    // }

}
bool checkPalindroim(string str, int i){
    //base cas
    int j = str.size()-1-i;
    if(i>j){
        return true;
    }
    //processing
    if(str[i]!=str[j]){
        return false;
    }
    else{
        return checkPalindroim(str, i+1);
    }
 


}


int main(){

    string s = "bahhab";

    
    if(checkPalindroim(s,0)){
        cout<<"hai"<<endl;
    }else{
        cout<<"nahi hai"<<endl;
    }


    return 0;
}