#include<iostream>
#include<string>
using namespace std;

char firstDigit(string inputString) {

    for (int i = 0; i < inputString.size(); i++)
    {
        if (((inputString.at(i) - '0') >= 0) && ((inputString.at(i) - '0') <= 9))
        {
            return inputString.at(i);
        }
    }

    return 0;
}

void findFirstDigit(void)
{
    string str;
    cout << "enter the string: ";
    cin >> str;

    cout << "First Digit in String: " << firstDigit(str) << endl;
}