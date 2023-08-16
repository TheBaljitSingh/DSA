 #include<iostream>
 using namespace std;
 int main()
 {
    //  int A[10]={6,11,25,8,15,7,12,20,9,14}, n=10, key;
    int A[10], n=10, key;  /*  this block is used for input in array*/
    cout<<"enter numbers";
    for(int i=0; i<n; i++){
        cin>>A[i];
    }


     cout<<"Enter key\n";   // this block is for finding element in array
     cin>>key;

     for(int i=0; i<n; i++){
         if(key ==A[i])
     {
         cout<<" found at "<<endl<<i;
         return 0;

     }     


     }
     cout<<"Not Found";
                   


 }