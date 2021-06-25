#include <iostream>
using namespace std;
int main()
{
    signed long num1 =0;  
	cout << " Enter  a number  ";
    cin >> num1;
    if(num1 > 0)
    {
        cout << " Entered number is positive"<<endl;
    }
    else if(num1 < 0)
    {
        cout << " Entered number is negative"<<endl;
    }
    else
    {
        std::cout << " The number is zero"<<endl;
    }
    
}
