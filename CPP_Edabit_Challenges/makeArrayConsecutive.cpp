#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int makeArrayConsecutive(vector<int> statues) 
{
	int min = * min_element(statues.begin(), statues.end());
	int max = *max_element(statues.begin(), statues.end());
	int count = max - min -1;

	for (int i = min+1; i < max; i++)
	{
		for (auto& v : statues)
		{
			if (v == i)
			{
				count--;
				break;
			}
		}
	}

	return ((count > 0)? count : 0);
}

void ArrayConsecutive(void)
{
	vector<int> arr;
	int size;
	cout << "Enter the size of the vector:";
	cin >> size;
	arr.resize(size);

	cout << "Enter the elements";
	for (int i = 0; i < size; i++)
	{
		cin >> arr.at(i);
	}

	cout << "Number of statues: " << makeArrayConsecutive(arr) << endl;
}