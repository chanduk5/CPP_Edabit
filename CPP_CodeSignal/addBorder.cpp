#include<iostream>
#include<vector>
#include<string>

using namespace std;

#define STRING_BORDER_EXT (2)
#define NUM_BORDERS	(2)

vector<string> addBorderVetor(vector<string> picture) 
{
	string * border = new string(picture[0].size() + STRING_BORDER_EXT, '*');
	vector<string> vecBorder(picture.size() + NUM_BORDERS);

	for (int index = 0; index < picture.size() + NUM_BORDERS; index++)
	{
		vecBorder[index].insert(0, *border);
	}

	for (int index = 1; index <= picture.size(); index++)
	{
		for (int index1 = 1; index1 <= picture[index - 1].size(); index1++)
		{
			vecBorder[index].at(index1) = picture[index - 1].at(index1 - 1);
		}
	}

	return vecBorder;
}

void addBorder(void)
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

	str = addBorderVetor(str);

	cout << "[";

	for (auto& st : str)
	{
		cout << st << "," << endl;
	}

	cout << "]";
}
