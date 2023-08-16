#include<iostream>
using namespace std;
int main()
{   int amount = 1330;
    int hundn = amount/100;
    
     switch(1)
     {
        case 1: cout<<"100 Rupees Notes: "<<amount/100<<endl;
        //  break;  // break is not required
        case 2: cout<<"20 Rupees Notes: "<<(1330)-(100*hundn)<<endl;
        case 3: cout<<"1 Rupees Notes: "<<amount/1<<endl;
     }



    return 0;
}