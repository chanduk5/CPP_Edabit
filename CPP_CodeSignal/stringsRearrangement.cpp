#include<iostream>
#include<vector>
#include<string>
#include <algorithm>

using namespace std;

bool stringsRearrangement(vector<string> inputArray) 
{
	int misMatchcnt = 0;
	do
	{
		for (int i = 0; i < inputArray.size() - 1; i++)
		{
			misMatchcnt = 0;
			for (int j = 0; j < inputArray[i].size(); j++)
			{
				if (inputArray[i].at(j) != inputArray[i + 1].at(j))
				{
					misMatchcnt++;
					if (misMatchcnt > 1)
					{
						goto end;
					}
				}
			}
			if ((i == inputArray.size() - 2) && (misMatchcnt == 1))
			{
				return true;
			}
		}
	end:;
		
	} while (next_permutation(inputArray.begin(), inputArray.end()));

	return false;
}

void stringsRearrangement(void)
{
	vector<string> str;
	int num_str = 0;

	cout << "Enter the number of string: ";
	cin >> num_str;
	str.resize(num_str);

	cout << "Enter the strings: ";

	for (int index = 0; index < num_str; index++)
	{
		cin >> str[index];
	}

	cout << "Strings Rearrangement: " << stringsRearrangement(str) << endl;
}