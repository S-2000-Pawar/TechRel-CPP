#include<iostream>
#include<string>
using namespace std;

int main()
{
  string firstName = "Tom ";
  string lastName = "Jerry";
  string fullName = firstName + lastName;
  string fullname=firstName + " " + lastName;
  string fullname1=firstName.append(lastName);
  cout << "fullName:"<<fullName<<endl;
  cout << "fullname:"<<fullname<<endl;
  cout<<"fullname1:"<<fullname1<<endl;

  string college="ADCET";
  college[3]='B';
  cout<<"length of college is:"<<college.length()<<endl;
  cout<<"size of college is:"<<college.size()<<endl;
  cout<<college[1]<<endl;
  cout<<college[3]<<endl;

  string cartoon;
  cout<<"Enter name:";
  cin>>cartoon;
  cout<<"cartoon name is "<<cartoon<<endl;
    return 0;
}
