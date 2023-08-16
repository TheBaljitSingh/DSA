/* Second Type of Macro*/
#include<iostream>
using namespace std;
#define multi(a,b) (a*b)
int main()
{
    int a =5, b = 4, MULTI;
    MULTI = multi(a,b);
    cout<<MULTI;
    

        return 0;
}

/* First Types of Macro */
#include<iostream>
using namespace std;
#define a 5  // this is not a variable (insme storage allocate karne ke jarurat nahi hai)
int main()
{   
    int r = 2;
    cout<<a*r<<endl;

    
    return 0;
}