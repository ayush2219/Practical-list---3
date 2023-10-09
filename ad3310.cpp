//Write a c++ program using class to find maximum number from three numbers.
#include<iostream>
using namespace std;
class max
{
	private:
		int no1,no2,no3;
	public:
		void get_detail()
		{
			
			cout<<"Enter the no1 :: ";
			cin>>no1;
			cout<<"Enter the no2 :: ";
			cin>>no2;
			cout<<"Enter the no3 :: ";
			cin>>no3;
		}
		void display_detail()
		{
			if(no1>no2 && no2>no3)
			{
				cout<<"No1 is maximum"<<endl<<endl;
			}
			else 
			{
				if(no2>no3)
				{
					cout<<"No2 is maximum"<<endl<<endl;
				}
				else
				{
					cout<<"No3 is maximum"<<endl<<Endl;
				}
			}
		}
}no;
int main()
{
	no.get_detail();
	no.display_detail();
	
	cout<<"Student Name  :: Dholariya Ayush Prafulbhai"<<endl;
    cout<<"Enrollment no :: 220130318022";
}
