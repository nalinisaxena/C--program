#include <iostream>
using namespace std;



int main() {
    
    int n,i,flag=0;
    
    cout<<"\nenter the number";
    cin>>n;
    
    for(i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    
    if(flag==0)
    
        cout<<"\nthis is a prime number"<<n;
    
    else
    
        cout<<"\nthis is not prime number"<<n;
    
    
    
    return 0;
    
   
   

}
