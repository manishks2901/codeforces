#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ll n, k;
    cin >> n >> k;

    unordered_map<ll, ll> mp;

    ll ans = 0;

    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;

        ll y = k - x;

        if (mp.find(y) != mp.end())
        {
            ans += mp[y];
        }

        mp[x]++;
    }

    cout << ans << endl;

    return 0;
}