#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float area,s,n;
    cout << "Enter the number of sides of the polygon";
	cin>> n;
	cout << "Enter the length of each side of the polygon";
	cin>> s;	
	area= (n * (s * s)) / (4.0 * tan((M_PI / n)));
	cout<<" The area of the ploygon is"<<area<<endl;

}
