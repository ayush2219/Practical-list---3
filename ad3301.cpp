/*write a c++ program that declares student structure with data members name, std, perxentage.
take values fro these data members and display it.*/
#include<iostream>
using namespace std;
struct student
{
	char name[100];
	int std;
	float percentage;
};
int main()
{
	student s;
	cout<<"Enter information :: "<<endl;
	cout<<"ENter a name :: ";
	cin>>s.name;
	cout<<"Enter a std :: ";
	cin>>s.std;
	cout<<"Enter a percentage :: ";
	cin>>s.percentage;
	
	cout<<"Displaying information :: "<<endl;
	cout<<"Name       :: "<<s.name<<endl;
	cout<<"Std        :: "<<s.std<<endl;
	cout<<"Percentage :: "<<s.percentage<<endl<<endl;
	
	cout<<"Student Name  :: Dholariya Ayush Prafulbhai"<<endl;
    cout<<"Enrollment no :: 220130318022";
	return 0;
}
