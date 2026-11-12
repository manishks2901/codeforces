
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ll n, m;
    cin >> n >> m;

    vector<ll> small, large;

    for (ll i = 1; i <= n / i; i++)
    {
        if (n % i == 0)
        {
            small.push_back(i);

            if (i != n / i)
                large.push_back(n / i);
        }
    }

    reverse(large.begin(), large.end());
    small.insert(small.end(), large.begin(), large.end());

    if (m >= 1 && m <= (ll)small.size())
        cout << small[m - 1] << '\n';
    else
        cout << -1 << '\n';

    return 0;
}
