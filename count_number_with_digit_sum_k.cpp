#include <iostream>
using namespace std;
using ll = long long;
long long sum(ll num)
{
    if (num == 0)
    {
        return 0;
    }
    ll digit = (num % 10) + sum(num / 10);

    return digit;
}
int main()
{
    ll n, q, k;
    cin >> n >> q >> k;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr[i] = sum(arr[i]);

        if (arr[i] == k)
        {
            arr[i] = 1;
        }
        else
        {
            arr[i] = 0;
        }
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