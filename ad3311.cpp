//create class product. data members are product_id,product_name,unit_price. member functions re getdata().[getting input from user and assigning values to data members.] and put data() [display the product information] call both member function for two objects. W
#include<iostream>
using namespace std;
class product
{
	private:
		int id;
		char name[100];
		float price;
		
	public:
		void get_getchar()
		{
      
			cout<<"Enter the Product_id::";
			cin>>id;
			cout<<"Enter the Product_name::";
			cin>>name;
			cout<<"Enter the Product_price::";
			cin>>price;
		}
		void get_display()
		{
			cout<<"Product_id is::"<<id<<endl;
			cout<<"Product_name is::"<<name<<endl;
			cout<<"Product_price is::"<<price<<endl;
		}
};
int main()
{
	product obj;
	product obj2;
	obj.get_getchar();
	obj.get_display();
	obj2.get_getchar();
	obj2.get_display();
	
	cout<<"Student Name  :: Dholariya Ayush Prafulbhai"<<endl;
    cout<<"Enrollment no :: 220130318022";
}
