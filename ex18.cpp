#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a,b,c,area,s;
	cout<<"Enter the sides";
	cin>>a>>b>>c;
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	cout<<"The area of triangle is"<<area<<endl;
}
