#include<iostream>
using namespace std;
class vehicle
{
	public:
		vehicle()
		{
			cout<<"This is vehical"<<endl;
		}
};
class fourwheeler:public vehicle
{
	public:
		fourwheeler()
		{
			cout<<"This is fourwheeler vehical"<<endl;
		}
};
class car:public fourwheeler
{
	public:
		car()
		{
			cout<<"car has fourwheeler"<<endl;
		}
};
int main()
{
	car obj;
	return 0;
}
