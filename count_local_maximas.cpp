#include <iostream>
using namespace std;
using ll = long long;

ll query(ll arr[], ll l, ll r)
{
    if (l > r)
    {
        return 0;
    }
    else if (l == 0)
    {
        return arr[r];
    }
    else
    {
        return arr[r] - arr[l - 1];
    }
}

signed main()
{
    ll n, q;
    cin >> n >> q;

    ll arr[n];

    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll c[n];

    for (ll i = 0; i < n; i++)
    {
        if (i > 0 && i < n - 1 &&
            arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
        {
            c[i] = 1;
        }
        else
        {
            c[i] = 0;
        }
    }

    ll p[n];
    ll sum = 0;

    for (ll i = 0; i < n; i++)
    {
        sum += c[i];
        p[i] = sum;
    }

    for (ll i = 0; i < q; i++)
    {
        ll l, r;
        cin >> l >> r;

        l--;
        r--;

        sum = query(p, l + 1, r - 1);

        cout << sum << endl;
    }

    return 0;
}