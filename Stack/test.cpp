#include<iostream>
#include<stack>

using namespace std;


class Stack{
    //property
    public:
        int *arr;
        int top;
        int size;

    //behaviour
    Stack(int size){
        this-> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size-top> 1){
            top++;
            arr[top] = element;


        }else{
            cout<<"Stack OverFlow"<<endl;

        }


    }

    void pop(){
        if(top>=0){
            top--;
        } else{
            cout<<"Stack Underflow"<<endl;
        }

    }

    int peek(){
        if(top>=0 && top<size){
            return arr[top];
        }
        else{
            cout<<"Stack is Empty";
            return -1;
        }
    }

    bool isEmpty(){
        if(top==-1){
            return true;
        } else{
            return false;
        }

    }
};



int main(){

    Stack st(5);

    st.push(22);
    st.push(43);
    st.push(44);
    
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;

 
    /*

   stack<int>s;

   s.push(2);
   s.push(3);

   s.pop();

   cout<<s.top();
    */


    return 0;
}
