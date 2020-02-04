#include<iostream>
#include<vector>

using namespace std;

std::vector<int> vectorAlternatingSums(std::vector<int> a)
{
	int i = 2, j = 3;
    while ((i < a.size()) || (j < a.size()))
    {
		a[0] = (i < a.size()) ? (a[0] + a[i]) : a[0];
		a[1] = (j < a.size()) ? (a[1] + a[j]) : a[1];
        i = i + 2;
        j = j + 2;
    }
    a.resize(2);
    return a;
}

void alternatingSums(void)
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

	arr = vectorAlternatingSums(arr);

	cout << "Adjucent elements product: [";

	for (auto& v : arr)
	{
		cout << v << ", ";
	}

	cout << "]" << endl;
}