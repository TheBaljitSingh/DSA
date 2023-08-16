class Solution{
    public:
    
    int getLength(Node *head){
        
        int cnt = 0;
        
        while(head!=NULL){
            
            cnt++;
            head = head->next;
        }
        return cnt;
    }
    int dataAtPosition(Node *head, int position){
        
        
        
            Node* curr = head;
            Node* prev = NULL;
            
            int cnt = 1;
            while(cnt<position){
                prev = curr;
                curr = curr->next;
                cnt++;
            }
            return curr->data;

        
       
       
    }
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        // Your code here

        if(head->data=NULL){
            return -1;
        }
        
        
        int length = getLength(head);
        int position = (length/2)+1;

        
        if(position =1){
            return head->data;
            
        }
        else{
            return dataAtPosition(head, position); 

        }

        
    }
};