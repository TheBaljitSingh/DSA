// Tail ko lekar chalna jaruri nahi hai
//NULL pointer ko access karne ka kosish karoge to code segementation fault dega


#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    //Constructor
    Node(int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node(){
        int val = this -> data;
        if(next != NULL){
            delete next; 
            next = NULL;

        }
        cout<<"memory free for node with data "<<val<<endl;
    }
};

//traversing a linked list
void print(Node* head, Node* tail){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout << endl;
    cout << "Head "<<head ->data <<endl;
    cout << "Tail "<<tail -> data<<endl;
}

//gives length of linked list
int getLength(Node* head){
    int len = 0;
    Node* temp = head;

    while(temp!=NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

void insertAtHead(Node* &head, Node* &tail, int d){

    //empty list
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(d);
        temp -> next = head;
        head -> prev = temp;
        head = temp;

    }  
}
void insertAtTail(Node* &head, Node* &tail, int d){

    if(tail == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;

    }
    else{
        Node* temp = new Node(d);
        tail -> next = temp;
        temp->prev = tail;
        tail = temp;

        
    }



}

void insertAtPosition(Node* &head, Node* &tail, int position, int d){

    //insert at Start
    if(position ==1){
        insertAtHead(head,tail, d);
        return;
    }
    Node* temp = head;
    int cnt = 1;

    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }

    //insert at last position
    if(temp->next == NULL){
        insertAtTail(head,tail, d);
        return;
    }


    //creating a node for d(middle)
    Node* nodeToInsert = new Node(d);

    nodeToInsert->next = temp ->next;

    temp->next->prev = nodeToInsert;

    temp->next = nodeToInsert;
     
    nodeToInsert->prev = temp;
}

void deleteNode(int position, Node* &head){

    //deleting first or start node
    if(position ==1){
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp ->next = NULL;
        delete temp;
    }
    else{
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt<position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        curr->next->prev = curr->prev;
        curr->prev = NULL;
        prev->next = curr->next;
        curr -> next = NULL;
        // curr->next->prev = prev;
        delete curr;
    }
}


int main()
{
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

//    cout<< getLength(head);
    print(head, tail);
    insertAtHead(head,tail, 11);
    print(head,tail);

    insertAtHead(head,tail, 8);
    print(head,tail);

    insertAtHead(head,tail, 14);
    print(head,tail);

    insertAtTail(tail,tail, 19);
    print(head,tail);


    
    cout<<"Insert At Last Position"<<endl;
    insertAtPosition(head, tail, 6, 100);
    print(head,tail);

    deleteNode(6, head);  // Doubt - jab last wala node delete ho raha hai to tail ko update karo

    print(head, tail);

    return 0;
} 