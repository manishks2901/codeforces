
#include <iostream>
#include <unordered_map>
using namespace std;

using ll = long long;

int main()
{
    unordered_map<ll, ll> mp;

    ll n;
    cin >> n;

    for (ll i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x;

        if (x == 1)
        {
            cin >> y;
            mp[y]++;
        }
        else if (x == 2)
        {
            cin >> y;

            if (mp.find(y) != mp.end())
            {
                if (mp[y] == 1)
                {
                    mp.erase(y);
                }
                else
                {
                    mp[y]--;
                }
            }
        }
        else if (x == 3)
        {
            cout << mp.size() << endl;
        }
        else if (x == 4)
        {
            cin >> y;

            if (mp.find(y) != mp.end())
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
