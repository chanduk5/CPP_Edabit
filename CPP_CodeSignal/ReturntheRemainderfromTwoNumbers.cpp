#include<iostream>
using namespace std;

int remainder(int x, int y) 
{
	return (x < y) ? x : (x / y);
}

int ReturntheRemainderfromTwoNumbers(void)
{
	int x, y;
	cout << "Enter x, y: ";
	cin >> x >> y;
 	cout << "Remainder is: " << remainder(x, y)<< endl;
	return 0;
}