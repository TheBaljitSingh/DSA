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
        this -> data = data;
        this->next = NULL;
    }
    //destructor
    ~Node(){
        int value = this -> data;
        //memory free
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"memory is free for node with data "<<value<<endl;

    }
 
};

void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp; 
    tail = temp;

}
 
void insertAtHead(Node* &head, int d){
    
    //new node create
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;                                                        
}
void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp->next;  

    }
    cout<<endl; 

}

// d denotes Data
void insertAtPosition(Node* &tail, Node* &head, int position, int d){

    //insert at start and updating head
    if(position == 1){
        insertAtHead(head, d);
        return;
    }
    // if(len==position-1){
    //     insertAtTail(tail, d);
    // }
    Node* temp = head;
    int cnt = 1;

    
    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }

    //inserting at Last Positon and update tail
    if(temp-> next == NULL){
        insertAtTail(tail, d);
        return;
    }


    //creating a node for d and inserting at middle
    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;
    
    temp -> next = nodeToInsert;

}
int length(Node* &head){
         int count =0;
        while(head!=NULL){
            count++;
            head = head->next;
        }
        return count;
}
 void deleteNode(int position, Node* &head){

    /*
    ISME DOUBT HAI
    // for deleting last node
    // first find the length of the linked list
    if(position==length(head)){
        
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt<position){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        prev ->next = NULL;
        delete curr;

    }
    */
    
    //deleting first or start node
    if(position == 1){
        Node* temp = head;
        head = head -> next;
        //memory free for head
        temp ->next = NULL;  // this is important for to avoid segementation fault
        delete temp;
    }
    else{
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt<position){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        prev -> next = curr ->next;
        curr ->next = NULL;
        delete curr;
    }
    
 }


int main()
{
    //create a new node
    cout<<"Inserting at Head "<<endl;
    Node* node1 = new Node(10);
    // cout<<node1 -> data <<endl;
    // cout<<node1 -> next <<endl;

    // head printed to node1
    Node* head = node1;
    Node* tail = node1;
    print(head);

    insertAtHead(head, 15);
    print(head);
    insertAtHead(head, 12);
    insertAtHead(head, 11);
    print(head);

    // insertAtHead(head, 20); 
    // print(head);
    cout<<"Insertering at Tail "<<endl;
    insertAtTail(tail, 1);
    print(head);
    insertAtTail(tail, 2);
    insertAtTail(tail, 3);
    
    
    
    print(head); 

    insertAtPosition(tail, head, 8, 22);
    print(head);

    cout<<"Head "<< head->data<<endl;
    cout<< "Tail "<<tail->data<<endl;

    deleteNode(7, head);  // ye 8th position ke liyea garbage value de raha hai tail me
    print(head);

    cout<<"Head "<< head->data<<endl;
    cout<< "Tail "<<tail->data<<endl;
    return 0;
}