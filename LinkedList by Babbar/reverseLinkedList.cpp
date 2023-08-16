#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this-> data = data;
        this-> next = NULL;
    }
    Node(){
        this->data = data;
        this->next = NULL;
    }


};

//function for reverse a linked list
Node reverse(Node* &head){
    Node* curr = head;
    Node* prev = NULL;

    while(curr!=NULL){

    }

}

int main(){
    //creat a new node

    Node* node1 = new Node(10);
    Node* node2 = new Node(20);





    return 0;
}