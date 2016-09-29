#include<iostream>
#include<string.h>
using namespace std;

class Arr
{
	public:
	      int roll;
	      string name;
	      float m;
};
int main()
{
	int i;
    Arr a;
	
	for(i=0;i<3;i++)
	{
		cout<<"\nenter the roll number";
		cin>>a.roll;
		
		cout<<"\nenter the name";
		cin>>a.name;
		
		cout<<"\nenter the marks";
		cin>>a.m;
}

for(i=0;i<3;i++)
{
	cout<<"\ndisplay student info"<<i+1;
	
	cout<<"\nroll number is:"<<a.roll<<"\nstudent name is"<<a.name<<"\nstudent marks is"<<a.m;
}

return 0;
}
