#include<iostream>
#include<vector>

using namespace std;

bool isLucky(int n) 
{

    int ncount = 0, firsthalfsum = 0, secoundhalfsum = 0;
    vector<int> numArr;

    while (n != 0)
    {
        numArr.push_back(n % 10);
        n = n / 10;
    }

    for (int i = 0; i < numArr.size(); i++)
    {
        if (i < (numArr.size() / 2))
        {
            firsthalfsum += numArr.at(i);
        }
        else
        {
            secoundhalfsum += numArr.at(i);
        }
    }

    return (firsthalfsum == secoundhalfsum) ? true : false;
}


void lucky(void)
{
    int num;

    cout << "Enter the number: ";
    cin >> num;
    cout << "Is lucky" << isLucky(num) << endl;
}

