#include<iostream>
using namespace std;

char toLowerCase(char ch){
    if(ch>='a'&& ch<='z'){
        return ch;
    }
    else{
        char temp = ch - 'A'+ 'a';
        return temp;
    }
}

int checkPalindrom(char name[],int length){
    
    int start =0; 
    int end = length-1;

    while(end>=start){
        if(toLowerCase(name[start++])!=toLowerCase(name[end--])){
            return 0;
        }

    }
    return 1;

};
int main()
{
/*
    // char ch='B';
    // cout<<"Printing B :"<<ch<<endl;
    // int temp = 'A';  // this will print ASCII value
    // cout<<"Printing : "<<temp<<endl;


    
    char name[10];
    cout<<"Enter Character"<<endl;
    cin>>name;


    int length = 0;
    for(int i=0; name[i]!='\0'; i++){
        length++;
    }

    cout<<"Check for palindorm"<<endl;

    int ans = checkPalindrom(name, length);
    if(ans==1){
        cout<<"yes it is palindorm";

    }
    else{
        cout<<"not palindorm";
    */

//    char myName[7]="Baljit";
    string myName = "Baljit";
   cout<<myName.length();
   myName.push_back('c');
   cout<<myName;
    


    return 0;
}