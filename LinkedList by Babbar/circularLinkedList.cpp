#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    //constrcutor
    Node(int d){
        this->data = d;
        this->next = NULL;
    }
    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            next = NULL;
        }
        cout<<" memory is free for node with data "<< value << endl;
    }
};

//circular me head ke jaururat nahi hoti, tail ke jarurat hoti hai
void insertNode(Node* &tail, int element, int d){

    //empty list
    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else{
        //non-empty list
        //assuming that the element is presnet in the list

        Node* curr = tail;
        while(curr->data != element){
            curr = curr -> next;
        }
 
        //elemnt found -> curr is representing element wala node
        Node* temp = new Node(d);
        temp ->next = curr->next;
        curr->next = temp;

    }
}

void print(Node* tail){

    Node* temp = tail;

    //do while atleast ek baar execcute hoga
    //tail ->next != temp [single node hoti to print nahi kar payega sirf while loop me]
    do {  
        cout << tail->data<<" ";
        tail = tail - next;
    } while(tail != temp);
    cout<<endl;

}

int main()
{
    //isme head pointer ke need nahi hogi. yaha pe tail pointer ka use hota hai

    Node* tail = NULL;

    //empty list me insert karte hai
    insertNode(tail, 5, 3);
    print(tail);

    insertNode(tail, 3, 5);
    print(tail);

    insertNode(tail,5, 7);
    print(tail);
 
    insertNode(tail, 7, 9);
    print(tail);

    insertNode(tail, 5, 6);
    print(tail);
    
    insertNode(tail, 9, 10);
    print(tail);





    return 0;
}