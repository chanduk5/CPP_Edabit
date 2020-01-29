#include<iostream>
#include<string>

using namespace std;
bool checkPalindrome(std::string inputString);

bool checkPalindrome(std::string inputString) {

    int i, j;
    bool status = 1;

    for (i = 0, j = inputString.length() - 1; ((i != j) && (i < j)); i++, j--)
    {
        if ((inputString[i]) != (inputString[j]))
        {
            return 0;
        }

    }

    if ((i == j) || (status == 1))
    {
        return 1;
    }

    return 0;
}

void stringPalindrome(void)
{
    string str;
    cout << "enter the string: ";
    cin >> str;


    cout << "check:" << checkPalindrome(str) << endl;
}