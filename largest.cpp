#include <iostream>
using namespace std;
int main()
{
    int i, n;
    float arr[3];
	cout << "Enter total number of elements"<<endl;
    cin >> n;
    for(i = 0; i < n; ++i)
    {
       cout << "Enter Number " << i + 1 << endl;
       cin >> arr[i];
    }
    for(i = 1;i < n; ++i)
    {
       if(arr[0] < arr[i])
           arr[0] = arr[i];
    }
    cout << "Largest element " << arr[0]<<endl;
	 return 0;
}
