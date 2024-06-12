#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }

};

Node* convertArr2LL(vector<int> arr){
    Node* head = new Node(-1); //why this
    Node* mover = head;
    for(int i=0; i<arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }

    return head->next; //why not return mover
    //

}

void printLL(Node* head){
    cout<<"called printing"<<endl;
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main(){

    vector<int> arr={2,5,8,7};

    Node* LL = convertArr2LL(arr);
    // Node* y = new Node(arr[0], nullptr);
    printLL(LL);
    // cout<<LL->data;


    return 0;
}