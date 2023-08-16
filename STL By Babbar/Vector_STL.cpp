// vector dnamic array hota hai
#include<iostream>
#include<vector>
using namespace std;
int main()

{
    
    vector<int> v;


    vector<int> a(5,1) ;      // here 5  is size of vector and 1 is (saare ko 1 se intitialise kar de)

     vector<int> last(a);
     cout<<"print last "<<endl;
     for(int i:last){
         cout<<i<<" ";
     } 
     cout<<endl;


    cout<<"capacity=> "<<v.capacity()<<endl;
    
    v.push_back(1);
    cout<<"capacity=> "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"capacity=> "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"capacity=> "<<v.capacity()<<endl;
    v.push_back(4);
    cout<<"capacity=> "<<v.capacity()<<endl;
    v.push_back(9);
    cout<<"capacity=> "<<v.capacity()<<endl;
    cout<<"size=> "<<v.size()<<endl;
    cout<<"Element at 2nd Index "<<v.at(2)<<endl;
        // size batata hai kitne element pade hue hai
        //capacity batata hai kitna element ke liyea space assign hua hai

        cout<<"front "<<v.front()<<endl;
        cout<<"back "<<v.back()<<endl;

        cout<<"before pop "<<endl;
        for(int i:v){
            cout<<i<<" ";

        }
        cout<<endl;

//cout<<"printing the array element in vector"<<endl;
// for(int i:v){
//   cout<<i<<" ";
//}
//
//


        v.pop_back();
        cout<<"after pop "<<endl;
        for(int i:v){
            cout<<i<<" ";
        }

        cout<<"before clear size "<<v.size()<<endl;
        v.clear();
        cout<<"after clear size "<<v.size()<<endl;








    return 0;
}