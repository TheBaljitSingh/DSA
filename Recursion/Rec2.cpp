#include<iostream>
using namespace std;
void reachHome(int src, int dest){

    cout << "source "<< src << " destinatin " << dest << endl;

    //base case
    if(src == dest){
        cout << " pahuch gya "<<endl;
        return;
    } 

    //processing - ek step aage badh jao
    src++;

    reachHome(src, dest);
}

int main()
{

    int dest = 10;  //destination
    int src = 1;   //source


    cout << endl;
    reachHome(src, dest);
    return 0;
}