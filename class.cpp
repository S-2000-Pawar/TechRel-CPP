#include<iostream>
#include<string>
using namespace std;
class student
{
	public:
		string name,name1,address,address1;
		int rollnumber,rollnumber1;
		int phonenum;
		
		
};
int main ()
{
	student s;
	s.name="John";
	s.name1="Sam";
	s.rollnumber=2;
	s.rollnumber1=3;
	s.address="Karad";
	s.address1="Malkapur";
	s.phonenum=9018354678;
	cout<<s.name<<endl;
	cout<<s.name1<endl;
	cout<<s.rollnumber<<endl;
	cout<<s.rollnumber1<<endl;
	cout<<s.address<<endl;
	cout<<s.address1<<endl;
	cout<<s.phonenum<<endl;
}

