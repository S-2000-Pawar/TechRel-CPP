#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"Enter a year"<<endl;
	cin>>year;
	if(year%4==0)
	{
		cout<<"is a leap year"<<endl;
	}
	else
	{
		cout<<"is not a leap year"<<endl;
	}
	if(year%100==0)
	{
	    cout<<"is a leap year"<<endl;
	}
	else
	{
		cout<<"is not leap year"<<endl;
	}
	if(year%400==0)
	{
		cout<<"is a leap year"<<endl;
	}
	else
	{
		cout<<"is not a leap year"<<endl;
	}
}
