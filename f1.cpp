#include<iostream>
using namespace std;

class B;
class A
{
	private:  int a;
	        public:
	               A()
	               {
					   a=10;
					   
				   }
				   friend int add(A,B);
				};
				
class B
{
	private:
	        int b;
	        public:
	              B()
	              {
					  b=20;
				  }
				  friend int add(A,B);
			  };
			  
			 
			 int add(A aa,B bb)
			  {
				  return aa.a+bb.b ;
			  }
		 
			  int main()
			  {
				  A abc;
				  B pqr;
				  
				  int addition =add(abc,pqr);
				  cout<<"addition is"<<addition;
				  
				  return 0;
				
			}
				   
