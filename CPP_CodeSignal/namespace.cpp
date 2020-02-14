#include <iostream>

namespace first
{
    int getVal()
    {
        return 5;
    }
}

namespace second
{
    const double x = 100;

    double getVal()
    {
        return 2 * x;
    }
}

using namespace std;
using second::x;
using namespace first; 
//using namespace second; /* if the commnet is open it's error, conflict in the namespace */

void nameSpace(void)
{
    // access function within first
    cout << first::getVal() << endl;

    // access function within second
    cout << second::getVal() << endl;
    cout << getVal() << endl;

    // access variable x directly
    cout << x << endl;
}