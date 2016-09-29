#include<iostream>
using namespace std;

class Company
{
	public:
	
	int no_of_emp;
	string field_name;
	string emp_name;
	int emp_salary;
	int joining_date;
	
	void cominfo()
	{
		for(int i=0;i<no_of_emp;i++)
		{ 
		cout<<"\nenter the name of developer";
		cin>>emp_name;
		cout<<"name of the feild";
		cin>>field_name;
		cout<<"enter the salary of empploy\n";
		cin>>emp_salary;
		cout<<"enter the joining date\n";
		cin>>joining_date;
	}
	}
	
	void comdis()
	{
		int total=0
		for(int i=0;i<no_of_emp;i++)
		{
	    cout<<"\nFull Name :"<<emp_name;
		cout<<"\nName of the feild"<<field_name;
		cout<<"\nJoining date"<<joining_date;
		cout<<"\nMonthly Salary :"<<emp_salary;
		
	 }
 }
			
	
};

int main()
{
	Company com;
	cout<<"!!.............Infosys Emploiess Information Syatem...............!!\n";
	cout<<"\nEnter the number of employ working in development feild";
	cin>>com.no_of_emp;
	cout<<"\nTotal developer in Infosys:-"<<com.no_of_emp;
	
	com.cominfo();
	com.comdis();
		
	return 0;	
}

