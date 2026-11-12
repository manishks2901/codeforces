#include <iostream>
using namespace std;
using ll = long long;
int main()
{
    ll n, k, t;
    cin >> n >> k >> t;
    ll arr[n];
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i < k)
        {
            sum += arr[i];
        }
    }
    ll count = 0;
    if (sum / k >= t)
    {
        count++;
    }

    for (ll i = k; i < n; i++)
    {
        sum += arr[i];
        sum -= arr[i - k];
        if (sum / k >= t)
        {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}