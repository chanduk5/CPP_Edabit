#include<iostream>
#include<vector>

using namespace std;

std::vector<int> sortByHeight(std::vector<int> a) 
{
	for (int i = 0; i < a.size()-1; i++)
	{
		if (a[i] != -1)
		{
			for (int j = i + 1; j < a.size(); j++)
			{
				if ((a[i] > a[j]) && (a[j] != -1))
				{
					a[j] = (a[i] ^ a[j]);
					a[i] = (a[i] ^ a[j]);
					a[j] = (a[i] ^ a[j]);
				}
			}
		}
		else
		{
			/* No Action */
		}
	}
	return a;
}

void placeByHeight(void)
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

	arr = sortByHeight(arr);

	cout << "[";
	for (auto& v : arr)
	{
		cout << v << ", ";
	}
	cout << "]";
}
