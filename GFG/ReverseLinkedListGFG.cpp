class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        Node* prev  = NULL;
        Node* next = NULL;
        Node* curr = head;

        while(curr!=NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        // head = prev;
        
        
        //   return head;
        // return head of reversed list
        return prev;
    }

};