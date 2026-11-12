#include <iostream>
using namespace std;
using ll = long long;
int query(ll P[], int L, int R)
{
    if (L > R)
    {
        return 0;
    }
    if (L == 0)
    {
        return P[R];
    }

    else
    {
        return P[R] - P[L - 1];
    }
}

int main()
{
    ll n, q;
    cin >> n >> q;
    ll arr[n];
    ll c[n - 1];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (ll i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            c[i] = 1;
        }
        else
        {
            c[i] = 0;
        }
    }
    ll p[n - 1];
    ll sum = 0;
    for (ll i = 0; i < n - 1; i++)
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
        sum = query(p, l, r - 1);
        if (sum == r - l)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}