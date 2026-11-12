#include <iostream>
using namespace std;
using ll = long long;
signed main()
{
    ll n, q;
    cin >> n >> q;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr[i] = arr[i] * arr[i];
    }
    for (ll i = 1; i < n; i++)
    {
        arr[i] = arr[i] + arr[i - 1];
    }

    for (ll i = 0; i < q; i++)
    {
        ll l, r;
        cin >> l >> r;
        if (l - 1 == 0)
        {
            cout << arr[r - 1] << endl;
        }
        else
        {
            cout << arr[r - 1] - arr[l - 2] << endl;
        }
    }

    return 0;
}