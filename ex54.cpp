#include<iostream>
using namespace std;
int main()
{
	int p,r,t,i;
	cout<<"Enter the Principle";
	cin>>p;
	cout<<"Enter the Rate of Interest";
	cin>>r;
	cout<<"Enter the Time";
	cin>>t;
	i=(p*r*t)/100;
	cout<<" The Simple interest for the amount "<<p<<" for" <<t<< " " <<r<<""<<i<<endl;

}
