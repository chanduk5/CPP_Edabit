#include<iostream>
#include<string>

using namespace std;

string reverseInParentheses(string inputString) 
{
    int j = 0, k = 0, m = 0;

    for (int i = inputString.length() - 1; i >= 0; i--)
    {
        if (inputString[i] != ')')
        {
            j++;
        }
        else
        {
            m = i;
            k = m - 1;
            while (inputString[k] != '(')
            {
                if (inputString[k] == ')')
                {
                    m = k;
                    k--;
                }
                else
                {
                    k--;
                }
            }

            for (int g = k + 1, h = m - 1 ; g < h; g++, h--)
            {
                inputString[g] = inputString[g] ^ inputString[h];
                inputString[h] = inputString[g] ^ inputString[h];
                inputString[g] = inputString[g] ^ inputString[h];
            }

            inputString.erase(k, 1);
            inputString.erase(m - 1, 1); 
            i = inputString.length() - j;
        }
    }

    return inputString;
}

void reverseInParenthesesString(void)
{
    string str;
    cout << "enter the string: ";
    cin >> str;

    cout << "Reversed String: " << reverseInParentheses(str) << endl;
}
