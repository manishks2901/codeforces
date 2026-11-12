
#include <iostream>
using namespace std;

int main()
{
    long long a;
    cin >> a;

    int count = 0;

    for (long long i = 1; i <= a / i; i++)
    {
        if (a % i == 0)
        {
            if (i == a / i)
                count++;
            else
                count += 2;
        }
    }

    cout << count << '\n';
    return 0;
}
