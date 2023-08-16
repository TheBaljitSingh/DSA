#include<iostream>
using namespace std;
class Node(){



};

void reverse1(Node* head){
    //base case
    if(head==NULL || head->next == NULL){
        return head;
    }

    Node* chotaHead = reverse1(head->next);

    head ->next->next = head; // ye reverse kar raha hai
    head->next = NULL;
    return chotahead;
}

void reverse(Node* head, Node* curr, Node* prev){
    
    //base case
    if(curr==NULL){
        head = prev;
        return;
    }
    // Node* next = curr->next;

    reverse(head,curr->next,curr)// yet thora triky hai
    curr->next = prev;   // doubt - ye reverse() ke call ke pahale hona chiyea tha na??


}

Node reverseLinkedList(Node *head){


    //Recursion method
    
    Node* curr = head;
    Node* prev = NULL;
    reverse(head, curr, prev);
    return head;

}

int main()
{


    return 0;
}