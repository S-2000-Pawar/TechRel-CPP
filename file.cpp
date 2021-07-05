#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream file;
	file.open("x.text");
	if(file)
	{
		cout<<"file exist"<<endl;
	}
	else
	{
		cout<<"file doesnot exist"<<endl;
	}
}
