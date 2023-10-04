#include<iostream>
#include<queue>
using namespace std;

class node {
    public:
        int data;
        node* left;
        node* right;

    node(int d) {
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

node* buildTree(node* root){
    // ye recursively hua hai
    cout<<"Enter the data: "<<endl;
    int data;
    cin>>data;
    root = new node(data);

    if(data==-1){
        return NULL;
    }

    cout<<"Enter data for inserting in left of "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter data for inserting in right of "<<data<<endl;
    root->right = buildTree(root->right);

    return root;



}
void printTree(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        if(temp==NULL){
            //level completed
            if(!q.empty()){
                q.push(NULL);
            }
            // cout<<"NO Data! ";
            cout<<endl;

        }else{
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
void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        if(temp==NULL){ //purana level completed ho gya hai
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
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

vector<vector<int>> orderWise(node* root){

    vector<node*>tempV;
    tempV.push_back(root);
    tempV.push_back(NULL);

    vector<vector<int>>ans;


    while(!(tempV.empty())){

    node* temp = tempV.front();

    // temp.push_back(tempV);


        if(tempV[0]==NULL){
            if(!(tempV.empty())){
                //kuch to element hai
                tempV.push_back(NULL);
            }
            // ans.push_back(tempV);
            // tempV.clear();
            tempV.erase(tempV.begin());

        }else{
            //save kar ke fir index ko badha de
            // tempV.pop_front();

            ans.back().push_back(temp->data);
            
            tempV.clear();
            tempV.push_back(NULL);

            tempV.push_back(temp->left);

            tempV.push_back(temp->right);


        }

        return ans;

        


    }

}

void reverseOrderTraversal(node* rofot){
    
    // done check leetcode
}

void inorder(node* root){
    //base case
    if(root== NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int h(node* root){
        // code here 
        if(root==NULL){
            return 0;
        }
        
        int L = h(root->left);
        int R = h(root->right);
        
        int ans = max(L,R)+1;
        return ans;
    }

int main() {

    node* root = NULL;


    root = buildTree(root);
    cout<<root->data;

    cout<<"Printing the tree"<<endl;
    printTree(root);

    // vector<vector<int>> ans;
    // level order traversal
    // cout<<"Printing the level order tree output"<<endl;
    // levelOrderTraversal(root);
    // ans = orderWise(root);
    // cout<<"printing the inorder "<<endl;
    // inorder(root);

    // int height = h(root);
    // cout<<"height is: "<<height<<endl;

    // for(int i=0; i<ans.size(); i++){
    //     for(int j=0; j<ans[i].size(); j++){
    //         cout<<ans[i][j]<<" ";
    //     }

    // }
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // cout<<"Printing the reverse order tree"<<endl;
    // reverseOrderTraversal(root);



    return 0;
}