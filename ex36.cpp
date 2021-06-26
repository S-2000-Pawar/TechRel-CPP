#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	
	cout<<"print floating-point number in fixed format with one decimal place"<<endl;
	int a=4,b=8;
	float c=5.5,d=6.6;
	cout<<"Test explicit type casting"<<endl;
	cout<<a/b<<endl;
	cout<<(float)a/b<<endl;
	cout<<a/(float)b<<endl;
	cout<<(float)(a/b)<<endl;
	cout<<"Test implicit type casting"<<endl;
	cout<<(int)a/c<<endl;
	cout<<(int)d/b<<endl;
	cout<<"int implicitly casts to double:"<<endl;
	a=c;
	cout<<"c"<<c<<endl<<"double truncate to int "<<endl;
	d=b;
	cout<<"b"<<b<<endl<<endl;
}
	
	








