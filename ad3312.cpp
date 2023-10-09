//write a c++ program toenter number and cost of a class "iteam" usoing getdata() and displaydata(). write a getdata() functiion outside the class iteam.
#include<iostream>
using namespace std;
class item
{
	private:
		int id;
		char name[100];
		float price;
	public:
		void getdata();
		void putdata()
		{
      
			cout<<"Product_id is::"<<id<<endl;
			cout<<"Product_name is::"<<name<<endl;
			cout<<"Product_price is::"<<price<<endl<<endl;
		}
};
void item::getdata()
{
	cout<<"Enter the Product_id::";
	cin>>id;
	cout<<"Enter the Product_name::";
	cin>>name;
	cout<<"Enter the Product_price::";
	cin>>price;	
}
int main()
{	
	item t1;
	t1.getdata();
	t1.putdata();
	
	cout<<"Student Name  :: Dholariya Ayush Prafulbhai"<<endl;
    cout<<"Enrollment no :: 220130318022";
	return 0;
}
