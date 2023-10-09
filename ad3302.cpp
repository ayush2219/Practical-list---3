/* Find out output of below program.
	#Include<iostream>
	using namepace std;
	struct student
	{
		char a;
		float c;
		char b;
	};
	int main()
	{
		cout<<sizeof(student);
		return 0;
	}
*/
#include<iostream>
using namespace std;
struct student
{
	char a;
	float c;
	char b;
};
int main()
{
	cout<<sizeof(student)<<endl<<endl;
	
	cout<<"Student Name  :: Dholariya Ayush Prafulbhai"<<endl;
    cout<<"Enrollment no :: 220130318022";
	return 0;
}
