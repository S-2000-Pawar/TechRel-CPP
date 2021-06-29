#include<iostream>
#include<string>
using namespace std;
void myfunction(string fname)
{
	cout<<fname<<"Refsnes"<<endl;
	
}
int main()
{
	myfunction("Liam");
	myfunction("Jenny");
	myfunction("Anja");
	return 0;
}
