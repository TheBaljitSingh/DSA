/*
#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    while(n>0){
        
        fact = fact*(n);
        n--;
       
        
    }
    return fact;

}

int main()
{
    
    
    cout<<factorial(5);
    
     
    
    return 0;
} 
*/

#include<iostream>
#include<math.h>
using namespace std;

int sum_of_square_evenNumbers(int n)
		{
            // int n =2;
            int ans = 0;
            int num=2;
            
		    for(int i=0; i<=n; i++){
                
		      
		        
		            
		        int ans = ans+pow(num,2);
		        
		        num = num+2;
                
		        
		        
		        
		    }
            return ans;
            
		}

int main()
{


    cout<<"answer is "<<sum_of_square_evenNumbers(2);
    return 0;
}