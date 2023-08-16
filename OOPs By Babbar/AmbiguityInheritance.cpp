#include<iostream>
using namespace std;
class A{
    public:
    void fun(){
        cout<<"this is functin A "<<endl;
    }

};
class B{
    public:
    void fun(){
        cout<<"this is functin B "<<endl;
    }

};

class Inherit: public A, public B{

};

int main()
{
    Inherit Obj1;
    // Obj1.fun();
    Obj1.A::fun();
    Obj1.B::fun();
    return 0;
}