#include<iostream>
using namespace std;
int main()
{
	float kel,frh;
	cout<<"Enter the temp in kelvin";
	cin>>kel;
	frh=(9.0/5)*(kel-273.15)+32;
    cout<<"The temp in kelvin is"<<kel<<endl;
	cout<<"The temp in fahrenheit is"<<frh<<endl;
}
