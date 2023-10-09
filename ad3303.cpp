/* Write a c++ program to declare structure of Employee with data members like emp_name,emp_code,emp_salary,
emp_branch and also display contents/values of member variables.
*/
#include<iostream>
using namespace std;
struct employee
{
	char emp_name[20];
	int emp_code;
	int emp_salary;
	char emp_branch[20];
}s1,s2,s3,s4;
int main()
{
	cout<<"Enter a emp name   :: ";
	cin>>s1.emp_name;
	cout<<"Enter a emp code   :: ";
	cin>>s2.emp_code;
	cout<<"Enter a emp salary :: ";
	cin>>s3.emp_salary;
	cout<<"Enter a emp branch :: ";
	cin>>s4.emp_branch;
	
	cout<<"Employee Name is   :: "<<s1.emp_name<<endl;
	cout<<"Employee Code is   :: "<<s2.emp_code<<endl;
	cout<<"Employee Salary is :: "<<s3.emp_salary<<endl;
	cout<<"Employee Branch is :: "<<s4.emp_branch<<endl<<endl;
	
	cout<<"Student Name  :: Dholariya Ayush Prafulbhai"<<endl;
    cout<<"Enrollment no :: 220130318022";
	return 0;
}
