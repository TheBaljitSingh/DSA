#include<iostream>
using namespace std;
class A 
{
    int a;
    static int b;
    public:
    A(int x, int y){
        a=x; b=y;
    }
    void show(){
        cout<<a<<" "<<b;
    }
    static void display(){
        cout<<b<<endl; // a is not accisable becaouse a is not static
    }

};
int A::b=0;
int main(){
    A obj1(10,20), obj2(100,200);
    obj1.show(); 
    obj2.show();
    A::display();
    obj1.show();


}