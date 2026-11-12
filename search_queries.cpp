
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll findInteger(ll arr[], ll size, ll k)
{
    ll startIndex = 0;
    ll endIndex = size - 1;

    while (startIndex <= endIndex)
    {
        ll mid = startIndex + (endIndex - startIndex) / 2;

        if (arr[mid] == k)
        {
            return mid + 1;
        }
        else if (arr[mid] > k)
        {
            endIndex = mid - 1;
        }
        else
        {
            startIndex = mid + 1;
        }
    }

    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, q;
    cin >> n >> q;

    vector<ll> arr(n);

    for (ll i = 0; i < n; i++)
        cin >> arr[i];

    while (q--)
    {
        ll x;
        cin >> x;

        cout << findInteger(arr.data(), n, x) << '\n';
    }

    return 0;
}
