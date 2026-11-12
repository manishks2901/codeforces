#include <iostream>
using namespace std;
int main()
{
    int a1, a2;
    int b1, b2;

    cin >> a1 >> a2;
    cin >> b1 >> b2;

    if (b2 < a2)
    {
        b2 += 60;
        b1--;
    }

    int park_hour = b1 - a1;
    int park_min = b2 - a2;

    if (park_min > 0)
    {
        park_hour++;
    }

    if (park_hour < 2)
    {
        cout << 0 << endl;
    }
    else if (park_hour > 2)
    {
        if (park_hour - 2 > 5)
        {
            cout << 100 << endl;
        }
        else
        {
            cout << (park_hour - 2) * 20 << endl;
        }
    }

    return 0;
}