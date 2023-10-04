#include<iostream>
#include<algorithm>
#include <bits/stdc++.h>
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
// char toLowerCase(char ch) {
//     if(ch >='a' && ch <='z')
//         return ch;
//     else{
//         char temp = ch - 'A' + 'a';
//         return temp;
//     }
// }
bool checkPalindroim(string str, int i){
    //base cas
    int j = str.size()-1-i;
    // 97 to 122 all small letter asii code
    transform(str.begin(), str.end(), str.begin(), ::tolower);

    if(i>j){
        return true;
    }
    //processing
    // uppe case ko lower case me badla
    //i ke liyea pointer change karna hai
    while(!(int(str[i])>96 && int(str[i])>122 )){
        // cout<<str[i]<<" ";
            i++;
    }
    while(!(int(str[j])>96 && int(str[j])>122 )){
            // cout<<str[j]<<" ";
            j--;
    }


    if(str[i]!=str[j]){
        return false;
    }
    else{
        return checkPalindroim(str, i+1);
    }
 


}


bool isPalindrome(string s) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);

        int i = 0;
        int j = s.size()-1;

        while(i<j){
                
                if(!(s[i]>=97 && s[i]<=122)){
                      i++;
                      continue;
                }
    
                if(!(s[j]>=97 && s[j]<=122)){
                    j--;
                    continue;
                }
                if(s[i]!=s[j]){
                    return false;
                }

                    i++;
                    j--;
                

        }
        return true; 
        
    }


int main(){

    string s = "0P";

    
    if(isPalindrome(s)){
        cout<<"hai"<<endl;
    }else{
        cout<<"nahi hai"<<endl;
    }

    // string s = "Bzljit";
    // cout<<int(s[1]);

    return 0;
}