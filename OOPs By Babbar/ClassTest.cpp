#include<iostream>
using namespace std;
class Hero{

    
    int health;

    public:

    
    char *name; //shallo copy karta hai
    char level;
    static int timeToComplete;

    static int random(){
        return timeToComplete;
    }


    void print(){
        cout<<"[ Name: "<< this->name<< ", ";
        cout<<"level: "<< this->level<<", ";
        cout<<"health: "<< this->health<<", ";
        cout<<endl<<endl;
    }
    
    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }
    void setHealth(int h){
        health = h;
    }
    void setLevel(char ch){
        level = ch;
    }
    // void setName(char name[]){
    //     strcpy(this->name, name);
    // }

    //copy constructor
    Hero(Hero& temp){  //agar pass by reference nahi kiya to ye infinite loop me fas jayega
        cout<<"copy constructor is called"<<endl;
        this->health = temp.health;
        this->level = temp.level;
    }


    //Paramaterised Constructor
    Hero(int health){
        cout<<" this-> "<<this<<endl;
        this -> health = health;  // [mere hisab se ye Original me jata hai this-> keyword se]

    }
    Hero(int health, int level){
        this -> level = level;
        this -> health = health;

    }
    Hero(){
        name = new char[100];
        cout<<"default constructor called"<<endl;
    }
    
    ~Hero(){  // ~ tilda sign
        cout<<"Deconstructor is called"<<endl;
    }

};

 //initializing with scope resolution operator  ::

 int Hero::timeToComplete = 5;


int main()
{
    cout<<" :: "<<Hero::timeToComplete<<endl;  // isme object create ke jarurat nahi padti
    cout<<Hero::random()<<endl;
    
    // Hero a;

    // cout<<a.timeToComplete<<endl;

    // Hero b;
    // b.timeToComplete = 10;
    // cout<<a.timeToComplete<<endl;
    // cout<<b.timeToComplete<<endl;

   



    // Hero hero1;
    // hero1.setHealth(12);
    // hero1.setLevel('D');


    // char nme[8]="Player1";
    // // hero1.setNam.e(nme);


    // // | dynamically me sab kuch manually karna padta hai. constructor call and deconstructor ke liyea |
    // Hero *h2 = new Hero();
    // delete h2;

 



/*
    cout<<"Hi!"<<endl;
    //object created
    Hero h2;  // object create hua to constructor call hota hai {default }
    //constructor call hoga h2.Hero() wala jo ki default hota hi agar tum nahi do to
    cout<<"Hello"<<endl;
*/


    /*
    //health is private
    Hero h1;
    h1.setHealth(55);

    cout<<"Health is "<< h1.getHealth()<<endl;
    cout<<"level is "<< h1.level<<endl;
    //creating object by dynamic allocation

    Hero *h = new Hero;  // memory allocated in heap section
    h->setHealth(80);
    h->setLevel('A');
    // cout<<"Health is "<< (*h).getHealth()<<endl;
    cout<<"Health is "<< h->getHealth()<<endl;
    // cout<<"level is "<< (*h).level<<endl;  // iska alternative tarika
    cout<<"level is "<< h->level<<endl;
    */





    return 0;
}