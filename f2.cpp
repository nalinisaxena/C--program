#include<iostream>
using namespace std;
class B;
class A
{
private: 
int a;

public: A()
{
	a=10;
}
friend void display(A,B);

};

class B
{
	private: int  b;
	
	public: B()
	{
		b=20;
	}
	friend void display(A,B);
	
};

void display (A aa,B bb)
{
	cout<<"a="<<aa.a;
	cout<<"b="<<bb.b;
}

int main()
{
	A abc;
	B pqr;
	display(abc,pqr);
	
return 0;
}
