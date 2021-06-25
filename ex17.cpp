#include<iostream>
using namespace std;
int main()
{
	int length,width,area,per;
	cout<<"Enter length of rectangle";
	cin>>length;
	cout<<"Enter width of rectangle";
	cin>>width;
	area=(length*width);
	per=2*(length+width);
	cout<<"Area of rectangle is"<<area<<endl;
	cout<<"Perimeter of rectangle is"<<per<<endl;
}
