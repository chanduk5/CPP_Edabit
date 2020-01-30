#include<iostream>
using namespace std;

int howManySeconds(int hours)
{
	return (hours * 60 * 60);
}

void ConvertHoursintoSeconds(void)
{
	int hours;
	cout << "Enter the no of hours: ";
	cin >> hours;
	cout << "No of seconds: " << howManySeconds(hours)<<endl;
}