#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;

int avoidObstacles(vector<int> inputArray)
{
	int maxElement = *max_element(inputArray.begin(), inputArray.end());

	for (int i = 2; i <= maxElement + 1; i++)
	{
		for (int j = 0; j < inputArray.size(); j++)
		{
			if (inputArray[j] % i == 0)
			{
				break;
			}

			if (j == inputArray.size() - 1)
			{
				return i;
			}
		}
	}
}

void avoidObstacles(void)
{
	vector<int> arr;
	int size;
	cout << "Enter the size of the vector: ";
	cin >> size;
	arr.resize(size);

	cout << "Enter the elements: ";
	for (int i = 0; i < size; i++)
	{
		cin >> arr.at(i);
	}

	cout << "jump length : " << avoidObstacles(arr) <<endl;
} 