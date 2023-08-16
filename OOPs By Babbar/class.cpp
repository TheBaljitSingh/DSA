//HomeWork
//Padding and Greeding alignment
// current object ke data member or function ko access karna chate ho to 'this' ko use kar shakte ho 
//what is constant keyword
//initialisation List
//'Data member' ko access karna

#include<iostream>
// #include "Hero.cpp"
using namespace std;

class Hero{
    //propertiew
    private:
    int health;

    public:      // kahi bhi access kar paunga    
    char *name;  // yahe pe size allocate karoge to heap me allocate hogi
    char level;
    

    //this is constructor and this is considerd first
    // Hero(){
    //     cout<<"Constructor Called"<<endl;
    // }
    

    Hero(){
        cout<<"Simple Constructor";
        name = new char[100];  // and yaha pe dynamically allocate ho jata hai
    }
    //parameterised Constructor
    Hero(int health){
        this -> health = health;
    }
    Hero(int health, char level){
        this -> level = level;
        this -> health = health;
    }


    //creating copy constructor
    // Hero(Hero& temp){
    //     cout<<"Copy constructor Called"<<endl;
    //     this->health = temp.health;
    //     this->level = temp.level;
    // }






    // private:      // sirf class ke andar access kar paunga

    void print(){

        cout<<endl;
        cout<<"Name: "<<this->name<<",";
        cout<<"health: "<<this->health<<",";
        cout<<"level: "<<this->level<<endl;
        cout<<endl;
    }

   
    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }

    void setHealth(int h){
        
        health = h;
        
        // health = h;
    }
    void setLevel(char ch){
        level = ch;
    }


    // void setName(char name[]){
    //     strcpy(this->name, name);
    // }

    // Destructor
    ~Hero(){
        cout<<"Destructor is called";
    }

 
};


int main()
{ 

    Hero h1;
    cout<<"size of "<<sizeof(h1)<<endl;

    // Hero S(70, 'C');
    // S.print();  
    
    
    // //copy constructor called ho jata hai 
    // Hero R(S);
    // R.print();

    // Hero hero1;
    // hero1.setHealth(12);
    // hero1.setLevel('B');
    // char name[7] = "Babbar";
    // hero1.setName(name);

    // hero1.print();

    // Hero hero2(hero1);  
    // hero2.print();
    // // Hero hero2 = hero1;
    // hero1.name[0]= 'G';
    // hero1.print();


    // Hero a;
    //  Hero *b = new Hero();
    //  delete b;

      






/*
    // object created Statically
    Hero ramesh(10);
    // cout<<"Address of ramesh "<<&ramesh<<endl;
    ramesh.print();

    // Dynamically
    Hero*h = new Hero(11);
    h->print();

    Hero temp(20, 'B');
    temp.print();


*/
    /*
    Hero a; // this is static allocation
    a.setHealth(80);
    a.setLevel('B');
    cout<<"level is: "<<a.level<<endl;
    cout<<"health is "<<a.getHealth()<<endl;
    
    //Dynamically
    Hero *b = new Hero;  // Heap me memory allocate hui hai
    b->setLevel('A');
    b->setHealth(70);

    cout<<"level is: "<<(*b).level<<endl;
    cout<<"health is "<<(*b).getHealth()<<endl;
    
    cout<<"level is: "<<b->level<<endl;
    cout<<"health is "<<b->getHealth()<<endl;

    */



    // //creating an objects
    // Hero ramesh;
    // cout<<"Size of ramesh is "<< sizeof(ramesh)<<endl;

    // cout<<"Ramesh Health is "<< ramesh.getHealth()<<endl;
    // //use setter
    // ramesh.setHealth(79);
    // ramesh.level = 'A';

    // cout<<"health = "<< ramesh.getHealth()<<endl;
    // cout<<"level = "<<ramesh.level<<endl;

    // cout<<"size: "<<sizeof(ramesh)<<endl;
    return 0;
}