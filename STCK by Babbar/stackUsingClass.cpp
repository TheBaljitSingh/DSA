// STACK implementation using CLASS
// Agar seperate class banakar karna ho to tak is class wale method se karo
// top is a index which is -1

#include<iostream>
#include<stack>
using namespace std;

class Stack{

    public:
    //properties
    int *arr;
    int top;
    int size;

    //behaviour
    Stack(int size){
        this-> size = size;
        arr = new int[size];
        top =-1;
    }

    void push(int element){
        if(size - top > 1){  // (atleast ek khali space hai) iski condition / khali space hai ki nahi uski condition
        top++; 
        arr[top] = element;
        }
        else{
            cout << "Stack OverFlow" << endl;
        }

    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack UnderFlow"<<endl; // stack me elements he nahi hai
        }
    }
    int peek(){
        if(top>=0){
        return arr[top];
        }
        else{
            cout<<"Stack is Empty"<<endl;
            return -1;
        }

    }
    bool isEmpty(){
        if(top ==-1){
            return true;
        }
        else{
            return false;
        }

    }


};

int main()
{
    
    Stack st(5);

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);

    cout<<st.peek()<<endl;

    st.pop();

    cout<<st.peek()<<endl;

    st.pop();

    cout<<st.peek()<<endl;
    
    st.pop();

    cout<<st.peek()<<endl;

    if(st.isEmpty()){
        cout<<"Stack is Empty mere Dost "<<endl;
    }
    else{
        cout<<"Stack is not Empty mere Dost "<<endl;
    }

 
    
    return 0;
}