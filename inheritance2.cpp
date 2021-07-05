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
class fourwheeler
{
	public:
		fourwheeler()
		{
			cout<<"This is fourwheeler vehical"<<endl;
		}
};
class car:public vehicle,public fourwheeler{
};
int main()
{
	car obj;
	return 0;
}
