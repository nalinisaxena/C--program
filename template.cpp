#include<iostream>
using namespace std;

template <class T>

void swapvalues(T &a,T &b)
{
	T temp=a;
	a=b;
	b=temp;
	
}
int main()
{
	int a=5,b=6;
	float x=82.34,y=32.34;
	char p='A',q='B';
	
	cout<<"Before swapping:-"<<endl;
	
	cout<<"a="<<a<<"b="<<b<<endl;
	cout<<"x="<<x<<"y="<<y<<endl;
	cout<<"p="<<p<<"q="<<q<<endl;
	
	swapvalues(a,b);
	swapvalues(x,y);
	swapvalues(p,q);
	
	cout<<"after swapping:-"<<endl;
	
	cout<<"a="<<a<<"b="<<b<<endl;
	cout<<"x="<<x<<"y="<<y<<endl;
	cout<<"p="<<p<<"q="<<q<<endl;
	
	return 0;
}
