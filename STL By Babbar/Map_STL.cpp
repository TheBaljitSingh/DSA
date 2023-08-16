// isme data key value ke form me store hota hai
  // sabki O(logN)
// unorderd map me O(N) hota hai.
#include<iostream>
#include<map>

using namespace std;
int main()
{
    map<int, string> m;
    m[1] = "babbar";         // 1 key hai and babbar value hai
    m[2] = " love";
    m[13] = "kumar";
    m.insert({5, "bheem"});
    cout<<"before erase"<<endl;

     
     for(auto i:m){
         cout<<i.first<<" "<<i.second<<endl;
     }
     cout<<"finding 13 => "<<m.count(-3);      // for finding in boolean expression



    m.erase(13);
    cout<<"after erase "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    auto it =m.find(5);
    for(auto i=it; i!=m.end(); i++ ){
        cout<<(*i).first<<endl;
    }
    // for(auto b:m){
    //     cout<<b.first<<" "<<b.second<<endl;
    // }


    return 0;
}