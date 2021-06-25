#include<iostream>
using namespace std;
int main()
{
	float frh,cel;
	cout<<"Enter the temp in fahrenheit";
	cin>>frh;
	cel=((frh*5.0)-(5.0*32))/9;
    cout<<"The temp in fahrenheit is"<<frh<<endl;
	cout<<"The temp in celsius is"<<cel<<endl;
}
