#include<iostream>
using namespace std;
class car
{
	private:
		int car_number;
		char car_model[10];
	public:
	void setdata()
	{
		cout<<"Enter the car number"<<endl;
		cin>>car_number;
		cout<<"Enter the car model"<<endl;
		cin>>car_model;
	}
	void getdata()
	{
		cout<<"car number is"<<car_number<<endl;
		cout<<"car model is"<<car_model<<endl;
	}

};
int main()
{
	car c;
	c.setdata();
	c.getdata();
}
