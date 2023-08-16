// FIFO - First In First Out
#include<iostream>
#include<queue>
using namespace std;
int main()
{   
    // create a queue
    queue<int>q;
    q.push(11);
    cout<<"front of q is:"<<q.front()<<endl;

    q.push(15);
    cout<<"front of q is:"<<q.front()<<endl;

    q.push(13);
    cout<<"front of q is:"<<q.front()<<endl;

    q.pop();
    q.pop();
    //q.pop(); 
    cout<<"after poping size of queue is: "<<q.size()<<endl;


    if(q.empty()){
        cout<<"queue is empty"<<endl;
    }
    else{
        cout<<"queue is not empty"<<endl;
    }
    
    return 0;
} 