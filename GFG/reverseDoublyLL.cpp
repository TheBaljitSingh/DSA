Node* reverseDLL(Node * head)
{
    //Your code here
    
    Node* prev  = NULL;
    Node* next = NULL;
    Node* curr = head;
    
    
    while(curr->next!=NULL){
    curr -> next = prev;
    next = curr->next;
    curr -> next = next;
    
    // curr -> next = next;
    curr = next;
    next = curr->next;
    }
    
        
    
    return curr;
    
    
}