#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;
int main()
{
    ll n, k;
    cin >> n >> k;
    ll arr[n];
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i < k)
        {
            sum += arr[i];
        }
    }
    ll maxm = sum;

    for (ll i = k; i < n; i++)
    {
        sum += arr[i];
        sum -= arr[i - k];
        maxm = max(maxm, sum);
    }

    cout << maxm << endl;
    return 0;
}