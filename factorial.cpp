#include<iostream>
using namespace std;
int main()
{
	int num=5;
    int	mul=1;
	while(num>0)
	{
		mul=num*mul;
		num--;
		cout<<mul<<endl;
	}
}
