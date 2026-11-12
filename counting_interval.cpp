
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long x, a, b;
        cin >> x >> a >> b;

        if (a > b)
        {
            cout << 0 << '\n';
            continue;
        }

        if (x == 1)
            cout << max(0LL, b - a - 1) << '\n';
        else if (x == 2)
            cout << b - a << '\n';
        else if (x == 3)
            cout << b - a << '\n';
        else if (x == 4)
            cout << b - a + 1 << '\n';
    }

    return 0;
}
