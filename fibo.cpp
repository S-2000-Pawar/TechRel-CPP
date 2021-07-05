#include<iostream>
using namespace std;
int main()
{
	int n,f,f1=-1,f2=1;
	cout<<"Enter the numbers"<<endl;
	cin>>n;
	cout<<"The fibonacci series is"<<endl;
	while(n>0)
	{
		f=f1+f2;
		f1=f2;
		f2=f;
		cout<<endl<<f;
		n--;
	}
}
