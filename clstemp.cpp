#include<iostream>
using namespace std;

template <class T>

class relational
{
	T x,y;
	
	public:
	      relational(T var1,T var2)
	      {
			  x=var1;
			  y=var2;
			  
		  }
		  
		  T getMin()
		  {
			  return((x<y)?x:y);
		  }
		  T getMax()
		  {
			  return((x>y)?x:y);
		  }
	  };
	  
	  int main()
	  {
		  relational<int> r1(11,7);
		  relational<double> r2(2.1,4.1);
		  
		  int min=r1.getMin();
		  double max=r2.getMax();
		  
		  cout<<"minimum element of object r1:"<<min<<endl;
		  cout<<"maximum element of object r2:"<<max<<endl;
		  
		  return 0;
	  }
	  
