#include<iostream>
#include<vector>

using namespace std;

int change(vector<int> inputArray) 
{
	int changes = 0, index = 0;
	int size = inputArray.size() - 1;

	while (index < size)
	{
		if (inputArray[index] >= inputArray[index + 1])
		{
			inputArray[index + 1] += 1;
			changes++;
			continue;
		}
		index++;
	}
	return changes;
}

void arrayChange(void)
{
	vector<int> arr;
	int index;
	cout << "Enter the no of elements in the vector: ";
	cin >> index;
	arr.resize(index, 0);
	cout << "enter the elements:";

	for (int i = 0; i < index; i++)
	{
		cin >> arr[i];
	}

	cout << "Number of changes: " << change(arr) << endl;
}

