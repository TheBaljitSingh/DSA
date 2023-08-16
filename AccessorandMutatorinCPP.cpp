#include<iostream>
using namespace std;

class Rectangle

{
    private:
    int length;
    int breadth;
    public:
        int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
    void SetLength(int l){
        length = l;
    }

    void SetBreadth(int b){   //setlength and setBreadth is accessor and mutator of a Class
    breadth = b;
}
int getLength(){
    return length;
}
int getBreadth(){
    return breadth;
}

};

void Rectangle :: SetLength(int l){
    length = l;

}

int main(){

Rectangle r1,r2;
r1.SetLength(4);
r1.SetBreadth(3);
cout<<r1.area()<<endl<<r1.perimeter()<<endl;
cout<<r1.getLength()<<" "<<r1.getBreadth();

}