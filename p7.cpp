#include <iostream>
using namespace std;

int main() {
	
	int n1,n2,flag,i;
	
	cout<<"enter the value of n1 to n2";
	cin>>n1>>n2;
	
	while(n1<n2)
	{
	    flag=0;
	    for(i=2;i<=n1/2;i++)
	    {
	        if(n1%i==0)
	        {
	            flag=1;
	            break;
	        }
	        
	    }
	    if(flag==0)
	    {
	        cout<<"\n"<<n1;
	    }
	    n1++;
	}
	return 0;
}
