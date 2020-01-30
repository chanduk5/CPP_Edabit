#include<iostream>
#include<vector>
#include<iomanip>

using namespace std;

bool almostIncreasingSequence(vector<int> sequence) 
{
	int prev_element = sequence[0], count = 0;
	for (auto index = 1; index < sequence.size(); index++)
	{
		if (prev_element >= sequence.at(index))
		{
			count = count + 1;
			if (count > 1)
			{
				return false;
			}

			if ((index == (sequence.size() - 1)) || (sequence.at(index - 1) < sequence.at(index + 1)))
			{
				sequence.erase(sequence.begin() + (index));
			}
			else
			{
				sequence.erase(sequence.begin() + (index - 1));
				prev_element = sequence.at(0);
				index = 0;
			}
		}
		else
		{
			prev_element = sequence.at(index);
		}
	}
	return true;
}

void IncreasingSequence(void)
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

	cout << boolalpha;
 	cout << "Almost Increasing Sequence: " << almostIncreasingSequence(arr) << endl;
}