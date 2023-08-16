// Create Class for Queue and implemnt this Queue
#include<iostream>
using namespace std;

class CircularQueue{
    int* arr;
    int front; 
    int rear;
    int size; 

    public:
    CircularQueue(int n){
        size = n;
        arr = new int[size];
        front = rear = -1;
    }

    bool enqueue(int value){  
        // to check whether queue is full
        if((front == 0 && rear == size-1) || (rear == (front-1)%(size-1))){
            cout<<"Queue is Full";
            return false;
        }
        else if(front ==-1){  // first element to push
            front = rear = 0;
        }
        else if(rear == size-1 && front != 0){
            rear =0;  // to maintain cyclic nature
        }
        else{
            rear++;
        }
       arr[rear]= value;
       return true;
        

    }
    int dequeue(){
        if(front == -1){ // to check queue is empty
            cout<<"Queue is Empty"<<endl;
            return -1;
        }
        int ans = arr[front];
        arr[front]=-1;
        if(front == rear){  // single element is present
        front = rear =-1;
        }

        else if(front == size -1){
            front =0;  //to maintain cyclic nature
        }
        else{
            front++;
        }
        return ans;
    }

};


/*
class Queue {
    int* arr;
    int front;
    int rear;
    int size;
public:
    Queue() {
          // Implement the Constructor
        size = 100001;
        arr = new int[size];
        front = 0;
        rear =0;

      
    }


    bool isEmpty() {
        if(front == rear){
            return true;
        }
        else{
            return false;
        }
    }

    void enqueue(int data) {
        if(rear == size)
            cout<<"Queue is Full"<<endl;
        else{
            arr[rear]=data;
            rear++;
        }
    }

    int dequeue() {
        if(front == rear){
            return -1;
        }
        else{
            int ans = arr[front];
            arr[front]= -1;
            front++;
            if(front==rear){ // this is for stopping wastage of size in queue
                front =0;
                rear = 0;
            }
            return ans;
        }
       
    }

    int front() {
        if(front == rear){
            return -1;
        }
        else{
            return arr[front];
        }
       
    }
};
*/

int main()
{
    return 0;
}