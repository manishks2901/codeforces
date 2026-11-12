#include <iostream>
using namespace std;
bool isPrimes(long long int n)
{
    if (n <= 1)
    {
        return false;
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

        return isPrime;
    }
}
int main()
{
    long long int n;
    cin >> n;
    int count = 0;
    for (int i = 2; i <= n; i++)
    {
        if (isPrimes(i))
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}