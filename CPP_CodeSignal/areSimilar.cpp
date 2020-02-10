#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>

using namespace std;

bool similar(std::vector<int> a, std::vector<int> b)
{
	int swapCount = 0;
	for (int i = 0; i < a.size(); i++)
	{
		for (int j = i; j < b.size(); j++)
		{
			if ((a[i] == b[j]) && (i == j))
			{
				break;
			}
			else if ((a[i] == b[j]) && (i != j))
			{
				if (swapCount > 0)
				{
					return false;
				}

				swapCount++;
				iter_swap(b.begin() + i, b.begin() + j);
				break;
			}
			else if ((a[i] != b[j]) && (j == b.size() - 1))
			{
				return false;
			}
			else
			{
				/* No Action */
			}
		}
	}

#if 0
	int count1 = 1, count2 = 0, swapCount = 0;
	for (int i = 0; i < a.size(); i++)
	{
		for (int j = i + 1; ((i < a.size() - 1) && (j < a.size())); j++)
		{
			if ((a[i] != 0) && (a[i] == a[j]))
			{
				count1 += 1;
				a.at(j) = 0;
			}
		}

		for (int k = 0; k < b.size(); k++)
		{
			if (a[i] == b[k])
			{
				if ((i != k) && (swapCount > 0))
				{
					return false;
				}
				else
				{
					swapCount += 1;
				}
				count2 += 1;
			}
		}

		if (count1 != count2)
		{
			return false;
		}
		else
		{
			count1 = 1, count2 = 0;
		}
	}
#endif
	return true;

}

void areSimilar(void)
{
	vector<int> arr1, arr2;
	int index1, index2;

	cout << "Enter the no of elements in the vector1 & vector2: ";

	cin >> index1 >> index2;
	arr1.resize(index1, 0);
	arr2.resize(index2, 0);

	cout << "enter the elements in vector1: ";
	for (int i = 0; i < index1; i++)
	{
		cin >> arr1[i];
	}

	cout << "enter the elements in vector2: ";
	for (int i = 0; i < index2; i++)
	{
		cin >> arr2[i];
	}

	cout << "Vector1 and vector2 are similar: " << similar(arr1, arr2) << endl;
}