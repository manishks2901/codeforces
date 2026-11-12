
#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    if (n <= 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        bool isPrime = true;

        for (long long i = 2; i <= n / i; i++)
        {
            if (n % i == 0)
            {
                isPrime = false;
                break;
            }
        }

        cout << (isPrime ? "YES" : "NO") << endl;
    }

    return 0;
}
