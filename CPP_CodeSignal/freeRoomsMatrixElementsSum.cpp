#include<iostream>
#include<vector>

using namespace std;

int matrixElementsSum(vector<vector<int>> matrix)
{
	int sum = 0;

	for (int r = 0; r < matrix.size(); r++)
	{
		for (int c = 0; c < matrix[r].size(); c++)
		{
			if (r == 0)
			{
				sum += matrix.at(r).at(c);
			}
			else if (((matrix.at(r - 1).at(c)) != 0) && (matrix.at(r).at(c) != 0))
			{
				sum += matrix.at(r).at(c);
			}
			else
			{
				matrix.at(r).at(c) = 0;
			}
		}
	}

	return sum;
}

void freematrixElementsSum(void)
{
	vector<vector<int>> arr;
	int row, col;

	cout << "enter the num of rows and coloums: ";
	cin >> row >> col;

	/* resize the rows*/
	arr.resize(row);

	/* resize the col */
	for (int i = 0; i < row; i++)
	{
		arr[i].resize(col);
	}
	
	/* Initialize the 2D vector */
	cout << "enter the 2D vector: \n";
	for (unsigned int i = 0; i < arr.size(); i++)
	{
		for (unsigned int j = 0; j < arr[i].size(); j++)
		{
			cin >> arr[i][j];
		}
	}

	cout << "free matrix elements sum: " << matrixElementsSum(arr) << endl;
}