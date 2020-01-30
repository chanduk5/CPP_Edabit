#include<iostream>
#include<algorithm> //Algorithm is a standard template library :: count
#include<vector>   // STL library

using namespace std;

#define ROW		(2)
#define COL		(2)

int letterCounter(vector<vector<char>> arr, char c)
{
	int counter = 0;
	for (auto& v : arr)
	{
		counter += count(v.begin(), v.end(), c);
	}

	return counter;
}

void CountLettersinaWordSearch(void)
{
	/* Declare the 2D character vector */
	vector<vector<char>> charArr(ROW, vector<char>(COL, 'A'));
	char c;
	int letterCount = 0;

	/* Initialize the 2D vector */
	cout << "enter the 2D vector\n";
	for (unsigned int i = 0; i < charArr.size(); i++)
	{
		for (unsigned int j = 0; j < charArr[i].size(); j++)
		{
			cin >> charArr[i][j];
		}
	}

	/* Enter the character */
	cout << "enter the character\n";
	cin >> c;

	letterCount = letterCounter(charArr, c);
	cout << "letter count: " << letterCount << endl;
}


