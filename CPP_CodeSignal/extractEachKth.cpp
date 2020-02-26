#include<iostream>
#include<vector>

using namespace std;

vector<int> extractEachKth(vector<int> inputArray, int k) 
{
    int i = 0;
    vector<int> arr;

    while (i < inputArray.size())
    {
        if ((i+1) % k != 0)
        {
            arr.push_back(inputArray[i]);
        }
        i++;
    }

    return arr;
}

void extractEachKth(void)
{
    vector<int> arr;
    int size, k;
    cout << "Enter the size of the vector: ";
    cin >> size;
    arr.resize(size);

    cout << "Enter the elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr.at(i);
    }

    cout << "Enter k: ";
    cin >> k;

    cout << "Extract Each Kth: " << "[";
    arr = extractEachKth(arr, k);
    for (int i = 0; i < size; i++)
    {
        cout << arr.at(i) << ",";
    }
    cout << "]";
}