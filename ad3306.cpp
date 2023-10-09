//write a c++ progra to create class shape with publicdata member's height & base. member function are display_shape(). Call member function using object of the class. (*scope resolution operator method function using object of the class)
#include<iostream>
using namespace std;
class shape
{
	private:
		float height,base;
		
	public:
		void get_shape();
		void put_shape();
};
void shape::get_shape()
{
	cout<<"Enter the height::";
	cin>>height;
	cout<<"Enter the base::";
	cin>>base;
}
void shape::put_shape() 
{
    cout<<endl<< "height: " << height <<endl;
    cout<< "base: " << base <<endl;
    cout<<endl<<height<<"*"<<base<<endl<<endl;
        
    cout<<"Student Name  :: Dholariya Ayush Prafulbhai"<<endl;
   	cout<<"Enrollment no :: 220130318022";
}
int main()
{
	shape s;
	s.get_shape();
	s.put_shape();	
}
