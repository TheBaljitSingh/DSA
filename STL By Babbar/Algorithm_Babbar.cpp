#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout<<"finding 3 : "<<binary_search(v.begin(), v.end(), 3)<<endl;
 
 
    cout<<"Lower Bound : "<<lower_bound(v.begin(), v.end(), 6)-v.begin()<<endl;
    cout<<"Upper Bound : "<<upper_bound(v.begin(), v.end(), 6)-v.begin()<<endl;
      
      int a =3; 
      int b=5;
      cout<<"max of a,b:  "<<max(a,b)<<endl;
      cout<<"min of a,b: "<<min(a,b)<<endl;
      swap(a,b);
      cout<<"a --->"<<a<<endl;
      cout<<"b --->"<<b;

      string abcd = "abcd";
      reverse(abcd.begin(), abcd.end());
      cout<<"reverse string of abcde is :  "<<abcd;

       rotate(v.begin(), v.begin()+1, v.end());
       cout<<"after rotate "<<endl;
       for(int i:v){
           cout<<i<<" ";
       } 
       // sort wala skipped






    return 0;
}