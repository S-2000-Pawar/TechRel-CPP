#include<iostream>
using namespace std;
int main()
{
	float frh,cel;
	cout<<"Enter the temp in celsius";
	cin>>cel;
	frh=(cel*9.0)/5.0+32;
    cout<<"The temp in celsius is"<<cel<<endl;
	cout<<"The temp in fahrenheit is"<<frh<<endl;
}
