#include<iostream>
#include<string>

using namespace std;

constexpr auto VALID_DOT_COUNT = 3;

bool isIPv4Address(std::string inputString)
{
    int i = -1, IPpart = -1, dotCount = 0;

    while (inputString[++i] != '\0')
    {
        if (inputString[i] != '.')
        {
            int num = inputString[i] - 48;
            if ((num >= 0) && (num <= 9))
            {
                IPpart = (IPpart < 0)? (num) : IPpart * 10 + (num);
            }
            else
            {
                return false;
            }
        }
        else
        {
            if ((IPpart >= 0) && (IPpart <= 255))
            {
                dotCount++;
                IPpart = -1;
            }
            else
            {
                return false;
            }
        }
    }

    return (((IPpart >= 0) && (IPpart <= 255)) && (dotCount == VALID_DOT_COUNT));
}

void IPv4AddressIdentification(void)
{
    string str;
    cout << "enter the string: ";
    cin >> str;

    cout << "is IPv4 Address:" << isIPv4Address(str) << endl;
}