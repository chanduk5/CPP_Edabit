#include<iostream>
#include<vector>

using namespace std;

vector<vector<int>> boxBlur(vector<vector<int>> image)
{
	vector<vector<int>> blurImage;
	int sum = 0;

	for (int i = 0; i+3 <= image.size(); i++)
	{
		for (int j = 0; j+3 <= image[i].size(); j++)
		{
			for (int k = i; k < i+3; k++)
			{
				for (int l = j; l < j+3; l++)
				{
					sum = sum + image[k][l];
				}
			}

			blurImage.resize(i+1);
			blurImage[i].resize(j+1);
			blurImage.at(i).at(j) = sum / 9;
			sum = 0;
		}
	}

	return blurImage;
}

void boxBlur(void)
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

	arr = boxBlur(arr);

	cout << "blur image is: ";
	/* Initialize the 2D vector */
	cout << "enter the 2D vector: \n";
	for (unsigned int i = 0; i < arr.size(); i++)
	{
		for (unsigned int j = 0; j < arr[i].size(); j++)
		{
			cout << arr[i][j];
		}
	}
}