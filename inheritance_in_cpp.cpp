#include<iostream>
using namespace std;
class Base{
    public:
    int x;
    void show(){
        cout<<x<<endl;
    }

    };
    class Derived:public Base{
        public:
        int y;
        void display(){
            cout<<x<<" "<<y<<endl;
        }

    };
int main(){
    Base b;
    b.x=25;
    b.show();   //25
    Derived d;
    d.x=10;
    d.y=15;
    d.show();       // 10
    d.display();  //10, 15
    
}