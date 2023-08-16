#include<iostream>
using namespace std;
int main(){
    complex c1(3,7);
    complex c2(5,4);
    complex c3;
}



class complex{
    private:
    int real;  
    int img;
    public:
    complex operator +(complex c1, complex c2)

};
complex operator+(complex c1, complex c2){
    complex t;
    t.real = c1.real+c2.real;
    t.img= c1.img+c2.img;
    return t;
}