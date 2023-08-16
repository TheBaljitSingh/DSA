#include<iostream>
#include<algorithm>
using namespace std;


char toLowerCase(char ch){
    if(ch>='a'&& ch<='z'){
        return ch;
    }
    else{
        char temp =ch - 'A' + 'a';
        return temp;

    }
}


//Palindrome of vector

bool checkPalindrome(char str[], int n){
    int s =0;
    int e = n-1;
    
    while(s<=e){
        if(toLowerCase(str[s]) !=toLowerCase(str[e])){
            return 0;
        }
        else {
            s++;
            e--;
        }
    }
    return 1;

}

void reverse(char name[], int n){
    int s =0;
    int e =n-1;
    while(s<e){
        swap(name[s++], name[e--]);
    }

    }

int getLength(char name[]){
    int count =0;
    for(int i =0; name[i]!='\0'; i++){
        count++;
    }
    return count;
}

int main()
{
    char name[20];   //Doubt - kitna element rakh shakte ho? 
    cout<<"Enter your name "<< endl;
    cin>>name;
    // name[2] = '\0';
    cout<<"Your name is ";
    cout<<name<<endl;
    int len = getLength(name);
    cout<<"Length is: "<<len<<endl;
    reverse(name, len);
    
    cout<<"Your reverse name is ";
    cout<<name<<endl;
    int palindrome = checkPalindrome(name, len);
    cout<<"this is Palindrome or not: "<<palindrome<<endl;

    // cout<<"CHARATER is "<<toLowerCase('b')<<endl;
    // cout<<"CHARATER is "<<toLowerCase('C')<<endl;


    return 0;
}