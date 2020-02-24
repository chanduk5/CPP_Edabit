#include<iostream>
#include<string>
using namespace std;

bool variableName(string name) {

    for (int i = 0; i < name.length(); i++)
    {
        if (!(((name[0] - '0') >= 0) && ((name[0] - '0') <= 9)) && ((name[i] == '_') || 
            (((name[i] - '0') >= 0) && ((name[i] - '0') <= 9)) || (((name[i] - 'A') >= 0) &&
            ((name[i] - 'A') < 26)) || (((name[i] - 'a') >= 0) && ((name[i] - 'a') < 26))))
        {
            continue;
        }
        else
        {
            return false;
        }
    }
    return true;
}

void checkValidVariableName(void)
{
    string str;
    cout << "enter the string: ";
    cin >> str;

    cout << "check:" << variableName(str) << endl;
}