#include<iostream>
using namespace std;

bool evenDigitsOnly(int n) {

    while (n != 0)
    {
        if (((n % 10) % 2) != 0)
        {
            return false;
        }
        n = n / 10; 
    }

    return true;
}

void evenDigitsOnly(void)
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    cout << "Even digits only in the number: " << evenDigitsOnly(n);
}
