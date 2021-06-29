#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float area,s;
	cout << "Enter the side of the hexagon";
	cin>> s;
	area= (6*(s*s))/(4*tan(M_PI/6));
	cout<<"The area of the hexagon is"<<area<<endl;

}
