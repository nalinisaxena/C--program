#include<iostream>
using namespace std;

class ABC
{
	public:
	       int a;
	       
	       void display()
	       {
			   cout<<"a="<<a;
		   }
		   ABC()
		   {
			   a=10;
		   }
		   ABC(int c)
		   {
			   a=c;
		   }
		   ~ABC()
		   {
			   cout<<"error";
		   }
	   };
		   
		   
		   int main()
		   {
			  
			   ABC aa;
			   aa.display();
			   ABC AA(200);
			   AA.display();
		   
		     
			   return 0;
		   
	   
		   }	   
		
