#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> l;
    list<int> n(5,100);
    cout<<"printing n "<<endl;
    for(int i:n){
        cout<<i<<" ";
    } cout<<endl;
    

    l.push_back(1);
    l.push_front(2);
    for(int i:l){                               // here : is belongs to told by love babbar
    cout<<i<<" ";

    }
    
    cout<<endl;
    l.erase(l.begin());
    cout<<"after erase"<<endl;
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<"size of list "<<l.size();
    return 0;
}