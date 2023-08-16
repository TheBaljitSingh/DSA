#include<iostream>
using namespace std;
class Student{
    private:
    int roll;
    string name;
    int mathmarks;
    int marksheet;
    int phymarks;
    int chemarks;



    public:
    Student( int r, string n, int m, int p, int c){
        roll = r;
        name = n;
        mathmarks = m;
        phymarks = p;
        chemarks = c;


    }
    int total(){
        return mathmarks+phymarks+chemarks;
    }
    char grade()
     {
        float average=total()/3;
        if(average>60)
        return 'A';
        else if (average >=40 && average <60)
        return 'B';
        else 
        return 'C';
    }


};



int main(){
    int roll;
    string name;
    int m,p,c;
    cout<<"Enter roll Number of a student: ";
    cin>>roll;
    cout<<"Enter name of a student: ";
    cin>>name;
    cout<<"Enter marks in 3 subject: ";
    cin>>m>>p>>c;
    Student s(roll, name, m,p,c);
    cout<<"Total Marks: "<<s.total()<<endl;
    cout<<"Grade of Student: "<<s.grade()<<endl;

    
}