#include<iostream>
#include<vector>

using namespace std;

int adjacentElementsProduct(std::vector<int> inputArray)
{
	int product = (inputArray.at(0) * inputArray.at(1));

	for (int index = 1; index < inputArray.size()-1; index++)
	{
		product = ((inputArray[index] * inputArray[index + 1]) > product) ? \
								((inputArray[index] * inputArray[index + 1])) : product;

	} 

	return product;
}

void vectorelementsadjacentElementsProduct(void)
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

	cout << "Adjucent elements product: " << adjacentElementsProduct(arr) << endl;
 }