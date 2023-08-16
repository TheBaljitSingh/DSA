#include<iostream>
using namespace std;
class Rectangle{
    private:

    int length;
    int breadth;
    public:

    int area(){
        return length*breadth;
    }
    int perimeter();

    
};

int Rectangle::perimeter(){
    return 2*(length+breadth);
}
int main(){
    Rectangle r1(4,5);  // error fix this

    cout<<r1.area();
    cout<<r1.perimeter();

}