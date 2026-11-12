
#include <iostream>
#include <unordered_map>
using namespace std;

using ll = long long;

int main()
{
    unordered_map<ll, ll> um;

    ll q;
    cin >> q;

    for (ll i = 0; i < q; i++)
    {
        ll x, y;
        cin >> x;

        if (x == 1)
        {
            cin >> y;
            um[y]++;
        }
        else if (x == 2)
        {
            cin >> y;
            um.erase(y);
        }
        else if (x == 3)
        {
            cout << um.size() << endl;
        }
        else if (x == 4)
        {
            cin >> y;

            if (um.find(y) != um.end())
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
