
#include <iostream>
#include <vector>
using namespace std;

using ll = long long;

bool isPrime(ll n)
{
    if (n < 2)
        return false;

    for (ll i = 2; i <= n / i; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> arr(n);

    ll countPrimes = 0;

    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (i < k && isPrime(arr[i]))
        {
            countPrimes++;
        }
    }

    ll maxPrimes = countPrimes;
    ll startIndex = 0;

    // Sliding window
    for (ll i = k; i < n; i++)
    {
        // Add incoming element
        if (isPrime(arr[i]))
            countPrimes++;

        // Remove outgoing element
        if (isPrime(arr[i - k]))
            countPrimes--;

        // Update maximum
        if (countPrimes > maxPrimes)
        {
            maxPrimes = countPrimes;
            startIndex = i - k + 1;
        }
    }

    // Print the required subarray
    for (ll i = startIndex; i < startIndex + k; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
