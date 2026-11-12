#include <iostream>
#include <unordered_map>

using namespace std;
using ll = long long;
int main()
{
    unordered_map<ll, ll> mp;
    ll q;
    cin >> q;
    for (ll i = 0; i < q; i++)
    {
        ll x, y;
        cin >> x >> y;
        if (x == 1)
        {
            mp[y]++;
        }
        else if (x == 2)
        {
            if (mp[y])
            {
                mp[y]--;
            }
        }
        else
        {
            cout << mp[y] << endl;
        }
    }
    return 0;
}