#include<iostream>
using namespace std;

inline int maxo(int a,int b)
{
	if(a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
	int main()
	{
		cout<<"max="<<maxo(10,20);
		return 0;
	}
