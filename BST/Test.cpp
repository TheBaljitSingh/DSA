#include<iostream>
#include<bits/stdc++.h>
#include<queue>
using namespace std;

class Node{
    
public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
    
};


void printBST(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        if(temp==NULL){
            //level completed
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
            // cout<<"NO Data! ";
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

Node* insertIntoBST(Node* &root, int d){
    //base case
    if(root == NULL){
        root = new Node(d);
        return root;
        
    }

    if(d>root->data){
        //insert in root->right
        root->right = insertIntoBST(root->right, d);
    }
    else{
        // insert in root->left
        root->left = insertIntoBST(root->left, d);
    }

    return root;


}

void takeInput(Node* &root){
    int data;
    cin>>data;

    while(data != -1){
        root = insertIntoBST(root, data);
        cin>>data;
    }
}

void inorder(Node* root){
    //base case
    if(root== NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}


Node* minValue(Node* root){
    Node* temp;
    temp = root;
    while(temp->left != NULL){
        temp = temp->left;
    }

    return temp;
}
Node* maxValue(Node* root){
    Node* temp;
    temp = root;
    while(temp->right != NULL){
        temp = temp->right;
    }

    return temp;
}


Node* searchInRoot(Node* root, int key){
        
        Node* temp = root;
        if(temp->data == key){

            if(temp->left==NULL || temp->right == NULL){

            }

            //predecessor
            cout<<maxValue(root->left)->data;
            //sucessor
            cout<<minValue(root->right)->data;



            return temp;
        }

        if(key>temp->data){
            searchInRoot(root->right, key);
            //go in right
        }
        else{
            searchInRoot(root->left, key);
            //go in left

        }
    }

//int key
Node* inorderSuccessor(Node* root, int k){
    Node* keyNode = NULL;

    Node* temp = root;

    while(temp->data != k){
        if(k>temp->data){
            temp = temp->right;
        }else{
            temp = temp->left;
        }
    }

    keyNode = temp;

    Node* successor = NULL;

    while(root != NULL){
        if(keyNode->data >= root->data){
            root = root->right;
        }else{
            successor = root;
            root = root->left;
        }
    }   

    return successor;
}

Node* inorderPredecessor(Node* root, Node* p){
    Node* predecessor = NULL;

    while(root != NULL){
        if(p->data >= root->data){
            predecessor = root;
            root = root->right;
        }else{
            root = root->left;
        }
    }

    return predecessor;
}

Node* deleteFromBST(Node* root, int val){
    if(root == NULL){
        return root;
    }
    if(root ->data = val){
        //deletion ke logic
    }
    if(root->data<val){
        
    }
}


int main(){

    Node* root = NULL;


    cout<<"Enter data to create BST"<<endl;
    takeInput(root);
    cout<<"printing the BST"<<endl;
    printBST(root); 
    // cout<<"Printing in the inorder"<<endl;
    // inorder(root);
    // cout<<endl<<"Printing the min. value"<<endl;
    // cout<<minValue(root)->data;
    // cout<<endl<<"Printing the max. value"<<endl;
    // cout<<maxValue(root)->data<<endl;

    // cout<<"Enter the key for finding predecessor"<<endl;
    // int key;
    // cin>>key;

    // cout<<"print the predecessor of root"<<endl;
    // cout<<maxValue(root->left)->data<<endl;
    // cout<<"print the sucessor of root"<<endl;
    // cout<<minValue(root->right)->data<<endl;
    cout<<inorderSuccessor(root, 30)->data;
    



    return 0;


}