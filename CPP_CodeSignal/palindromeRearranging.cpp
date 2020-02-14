#include<iostream>
#include<string>

using namespace std;

bool rearrange(string * str, int sIndex, int arrIndex, int cmpIndex)
{
	int length = (*str).length() - 1;
	for (int k = sIndex + 1; k < length - sIndex; k++)
	{
		if (str->at(cmpIndex) == str->at(k))
		{
			char temp = (*str).at(k);
			(*str).at(k) = (*str).at(arrIndex);
			(*str).at(arrIndex) = temp;
			return true;
		}
	}
	return false;
}

bool stringPalindromeRearranging(string inputString) 
{
	int length = inputString.length() - 1;
	int rearranged = false;

	for (int i = 0, j = length; ((i < (length + 1) /2) && (j > (length / 2))); i++, j--)
	{
		if (inputString[i] != inputString[j])
		{
			for (int k = i + 1; k < length - i; k++)
			{
					rearranged = rearrange(&inputString, i, j, i);
					break;
			}
			
			if ((!rearranged) && (i != 0))
			{
				return false;
			}
			else
			{
				if ((i == 0) && (!rearranged))
				{
					rearranged = rearrange(&inputString, i, i, length);
					if (!rearranged) { return false; }
				}
			}
			rearranged = false;
		}
	}
	return true;
}


void palindromeRearranging(void)
{
	string str;
	cout << "enter the string: ";
	cin >> str;

	cout << "palindrome Rearranging: " << stringPalindromeRearranging(str) << endl;
}

 