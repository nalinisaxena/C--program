#include <iostream>
using namespace std;

void swapping(int*,int*);

int main() {
    
    int a,b;
    
    cout<<"\nenter the values of a and b";
    cin>>a>>b;
    
    cout<<"\nbefore swapping value of a and b"<<a<<b;
    swapping(&a,&b);
    cout<<"\nafter swapping value of a and b"<<a<<b;
    
	
	
	return 0;
}

void swapping(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
