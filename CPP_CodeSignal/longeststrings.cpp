#include<iostream>
#include<vector>

using namespace std;

vector<string> allLongestStrings(vector<string> inputArray) 
{
	int cur_len = 0, prev_len = 0;

	for (int i = 0; i < inputArray.size(); i++)
	{
		cur_len = inputArray[i].length();

		if (i == 0)
		{
			prev_len = inputArray[i].length();
		}
		else if (((i == inputArray.size()) - 1) && (cur_len < prev_len))
		{
			inputArray.erase(inputArray.begin() + (i));
			i = -1;
		}
		else if (cur_len > prev_len)
		{
			inputArray.erase(inputArray.begin() + (i - 1));
			i = -1;
		}
		else {
			/* No Action */
		}

		prev_len = cur_len;
	}

	return inputArray;
}



void longestStrings(void)
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

	str = allLongestStrings(str);

	cout << "[";

	for (auto& st : str)
	{
		cout << st << "," << endl;
	}

	cout << "]";
}