#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str="Techrel";
	int i;
	cout<<"string in reverse";
	for(i=str.length()-1;i>=0;i--)
	{
		cout<<str[i];
	}
}
