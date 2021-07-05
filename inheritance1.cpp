//simple inheritance progream
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
class car:public vehicle{
};
int main()
{
	car obj;
	return 0;
}
