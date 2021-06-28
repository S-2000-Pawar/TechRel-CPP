#include <iostream>
using namespace std;
int main() 
{
    char ch; 
	cout << "Enter a character";
    cin >>ch;	
    cout <<" The ASCII value of "<<ch<<" " <<(int)ch << endl; 
    cout <<" The character for the ASCII value "<<(int)ch <<" "<<(char)((int)ch) <<endl; 
  
}
