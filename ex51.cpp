#include<iostream>
using namespace std;
int main()
{
    float kmph, miph;
	cout << "Enter the distance in kilometer";
    cin >> kmph;
	miph = (kmph * 0.6213712); 
    cout << kmph <<" Kmph"<< miph << "miph" << endl;
	
}
