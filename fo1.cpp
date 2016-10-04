#include<iostream>
using namespace std;
class shape
{
	public: int w,l;
	
	virtual void area()=0;
	
void accept()
	        {
				w=10;
				l=10;
			}
	
	
	
};

class Rect:public shape
{
	public:
	        
			void area()
			{
				cout<<"area of rectangle is"<<w*l;
				
			}
		};
		
		class tri:public shape
		{
			public:
				   void area()
				   {
					   cout<<"area of triangle is"<<w*l;
                    }
				};
				
				int main()
				{
					
					
					Rect r;
					r.accept();
					r.area();
					
					tri t;
					t.accept();
					t.area();
					
					return 0;
				}
