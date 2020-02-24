#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int absoluteValuesSumMinimization(vector<int> a) {

    vector<int> resVec;
    int value = 0;
    for (auto& x : a)
    {
        for (auto& ele : a)
        {
            value += abs(ele - x);
        }
        resVec.push_back(value);
        value = 0;
    }

    return a[min_element(resVec.begin(), resVec.end()) - resVec.begin()];
}

void absoluteValuesSumMinimization(void)
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
    cout << "Absolute Values Sum Minimization: " << absoluteValuesSumMinimization(arr) << endl;
}