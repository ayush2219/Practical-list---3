//write a c++ program to create class distance with private data member's feet & inches. members functions are get_distance() & display_distance(). Call both member functiions using object of the class.
#include<iostream>
using namespace std;
class Distance
{
	private:
		float feet,inches;
	public:
		void get_distance()
		{
			cout<<"Enter the feet :: ";
			cin>>feet;
			cout<<"Enter the inches :: ";
			cin>>inches;
		}
		void display_distance()
		{
			cout<<"The feet and inches of ::"<<feet<<"feet"<<inches<<"inches"<<endl<<endl;
		}
};
int main()
{
	Distance a;
	a.get_distance();
	a.display_distance();
	
	cout<<"Student Name  :: Dholariya Ayush Prafulbhai"<<endl;
    cout<<"Enrollment no :: 220130318022";
	return 0;
}
