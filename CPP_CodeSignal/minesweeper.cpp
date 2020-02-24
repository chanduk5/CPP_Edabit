#include<iostream>
#include<vector>

using namespace std;

vector<vector<int>> minesweeper(vector<vector<bool>> matrix) 
{
	vector<vector<int>> result(matrix.size(), vector<int>(matrix[0].size(), 0));

	for (int i = 0; i + 2 <= matrix.size(); i++)
	{
		for (int j = 0; j + 2 <= matrix[i].size(); j++)
		{
			if (matrix[i][j] == true)
			{
				result[i][j + 1]++;
				result[i + 1][j]++;
				result[i + 1][j + 1]++;
			}
			if (matrix[i][j + 1] == true)
			{
				result[i][j]++;
				result[i + 1][j]++;
				if (j+2 == matrix[i].size())
				{
					result[i + 1][j + 1]++;
				}
			}
			if (matrix[i + 1][j] == true)
			{
				result[i][j]++;
				result[i][j + 1]++;
				if (i+2 == matrix.size())
				{
					result[i + 1][j + 1]++;
				}
			}
			if (matrix[i + 1][j + 1] == true)
			{
				result[i][j]++;
				if (i+2== matrix.size())
				{
					result[i + 1][j]++;
				}

				if (j + 2 == matrix[i].size())
				{
					result[i][j + 1]++;
				}
			}
		}
	}
	return result;
}

void minesweeper(void)
{
	vector<vector<bool>> arr;
	vector<vector<int>> res;
	int row, col;
	bool value;

	cout << "enter the num of rows and coloums: ";
	cin >> row >> col;

	/* resize the rows*/
	arr.resize(row);

	/* resize the col */
	for (int i = 0; i < row; i++)
	{
		arr[i].resize(col);
	}

	/* Initialize the minesweeper matrix */
	cout << "enter the 2D vector: \n";
	for (unsigned int i = 0; i < arr.size(); i++)
	{
		for (unsigned int j = 0; j < arr[i].size(); j++)
		{
			cin >> boolalpha >> value;
			arr[i][j] = value;
		}
	}

	res = minesweeper(arr);

	cout << "minesweeper is: ";
	/* Initialize the 2D vector */
	cout << "enter the 2D vector: \n";
	for (unsigned int i = 0; i < res.size(); i++)
	{
		for (unsigned int j = 0; j < res[i].size(); j++)
		{
			cout << res[i][j];
		}
	}
}
