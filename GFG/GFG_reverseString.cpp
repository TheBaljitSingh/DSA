#include<iostream>
using namespace std;


string reverseWord(string str){
    
  //Your code here
  int start = 0;
  int end = str.length()-1;
  
  while(end>=start){
      swap(str[start++], str[end--]);
  }
  return str;        
  
}

int main()
{

    string str ="Geeks";
    cout<<"Reverse of the string is :"<<endl;
    cout<<reverseWord(str);

    return 0;
}

/*
        int getLength(char name[]){
        int count =0;
        for(int i =0; name[i]!='.'; i++){
            count++;
        }
        return count;
        }
*/