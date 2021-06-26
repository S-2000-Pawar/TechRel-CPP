#include<iostream>
#include<cmath>
#include<ctime>
using namespace std;
int main()
{
	time_t t=time(NULL);
	tm*tptr=localtime(&t);
	cout<<"The second is"<<(tptr->tm_sec)<<endl;
	cout<<"The minute is"<<(tptr->tm_min)<<endl;
	cout<<"The houres is"<<(tptr->tm_hour)<<endl;
	cout<<"The day of month is"<<(tptr->tm_mday)<<endl;
	cout<<"The month of year is"<<(tptr->tm_mon)<<endl;
	cout<<"The year is"<<(tptr->tm_year)<<endl;
	cout<<"The weekday is"<<(tptr->tm_wday)<<endl;
	cout<<"The day of year is"<<(tptr->tm_yday)<<endl;
	cout<<"The daylight saving is"<<(tptr->tm_isdst)<<endl;
	cout<<"current date"<<(tptr->tm_mday)<<"/"<<(tptr->tm_mon)+1<<"/"<<(tptr->tm_year)+1900<<endl;
	cout<<"current time"<<(tptr->tm_hour)<<":"<<(tptr->tm_min)<<":"<<(tptr->tm_sec)<<endl;
	return 0;
	
	
}



