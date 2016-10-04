#include<iostream>
using namespace std;

class maths
{
	public:
	       void add(int a,int b)
	       {
			   cout<<"add is"<<a+b;
		   }
		   void add(float a,float b)
		   {
			   cout<<"add is"<<a+b;
		   }
		   void add(int a,int b,int c)
		   {
			   cout<<"add is"<<a+b+c;
		   }
	   };
	   int main()
	   {
		   maths m;
		   int a,b,c;
		   int x,y;
		   
		   cout<<"enter the value of a,b,c";
		   cin>>a>>b>>c;
		   
		   cout<<"enter the value of x and y";
		   cin>>x>>y;
		   m.add(a,b);
		   m.add(x,y);
		   m.add(a,b,c);
		   
		   return 0;
	   }
