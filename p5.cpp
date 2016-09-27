#include <iostream>
using namespace std;
int prime(int);



int main() {
    
    int f,n;
    
    cout<<"\nenter the number";
    cin>>n;
    
    f=prime(n);
    
    if(f==0)
    
        cout<<"\nthis is a prime number"<<n;                                 
    
    else
    
        cout<<"\nthis is not prime number"<<n;
    
    
    
    
    return 0;
    
   }
   int prime(int n)
   {
       int i,flag=0;
       for(i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    
    return flag;
   }
