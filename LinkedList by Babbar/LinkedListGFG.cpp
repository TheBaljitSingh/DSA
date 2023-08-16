#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
    Node(){

    }

};

void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp->next;  

    }
    cout<<endl; 

}

void printGFG(Node* n){
    while(n!=NULL){
        cout<<n->data<<" ";
        n = n->next;
    }
}

int main()
{

    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    // Now Assignment

    head -> data = 10;
    head -> next = second;

    

    second -> data = 20;
    second -> next = third;

    third -> data = 30;
    third -> next = NULL;

    printGFG(head);
    



    return 0;
}