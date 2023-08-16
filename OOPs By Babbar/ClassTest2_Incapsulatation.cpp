#include<iostream>
using namespace std;

class Student{
    private:
        string name;
        string gender;
        int age;
        int roll_no;
        int height;
    public:
    int getAge(){
        return this->age;
    }


};

int main()
{
    Student first;
    
    return 0;
}