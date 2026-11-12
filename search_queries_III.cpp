#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll n, q;
    cin >> n >> q;

    unordered_map<ll, ll> mp;

    for (ll i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;

        mp[x] = i;
    }

    while (q--)
    {
        ll x;
        cin >> x;

        if (mp.find(x) != mp.end())
        {
            cout << mp[x] << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}