#include <iostream>
#include <unordered_map>
using namespace std;
using ll = long long;
int main()
{
    ll n, q;
    cin >> n >> q;
    unordered_map<ll, ll> mp;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]] = i;
    }
    bool flag = false;
    ll a, b;
    for (ll i = 0; i < n; i++)
    {
        int t = q - arr[i];
        if (mp.find(t) != mp.end() && mp[t] != i)
        {
            a = i;
            b = mp[t];
            flag = true;
            break;
        }
    }

    if (flag)
    {
        cout << a + 1 << " " << b + 1 << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}