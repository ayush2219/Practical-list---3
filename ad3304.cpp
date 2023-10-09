//write a c++ progam to create class student with data members name & age. member function are get_details() and display_details(). Call both member functionsusing objectof the class.
#include<iostream>
using namespace std;
class student
{
	private:
		string name;
		int age;
	public:
		void get_details()
		{
			cout<<"Enter a name :: ";
			getline(cin,name);
			cout<<"Enter a age  :: ";
			cin>>age;
		}
		void display_details()
		{
			cout<<"Your name is :: "<<name<<endl;
			cout<<"Your age is  :: "<<age<<endl;
		}
};
int main()
{
	student s1;
	
	s1.get_details();
	s1.display_details();
	
	cout<<"Student Name  :: Dholariya Ayush Prafulbhai"<<endl;
    cout<<"Enrollment no :: 220130318022";
}
