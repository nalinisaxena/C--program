#include<iostream>
using namespace std;


inline int add(int a,int b)
{
	return a*b;
}

int main()
{
	cout<<"\n add(10,20)="<<add(10,20);
	cout<<"\n add(11,22)="<<add(11,22);
	cout<<"\n add(101,202)="<<add(101,202);
	
	return 0;
}


