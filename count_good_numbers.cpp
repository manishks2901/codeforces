#include <iostream>
#include <set>

using namespace std;
using ll = long long;
int main()
{
    ll n, m, k;
    cin >> n >> m >> k;
    ll arr[n];
    set<ll> s;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (ll i = 0; i < m; i++)
    {
        int temp;
        cin >> temp;
        s.insert(temp);
    }
    int countGoodNumbers = 0;
    for (ll i = 0; i < k; i++)
    {
        if (s.find(arr[i]) != s.end())
        {
            countGoodNumbers++;
        }
    }
    cout << countGoodNumbers << " ";
    for (ll i = k; i < n; i++)
    {
        if (s.find(arr[i]) != s.end())
        {
            countGoodNumbers++;
        }
        if (s.find(arr[i - k]) != s.end())
        {
            countGoodNumbers--;
        }
        cout << countGoodNumbers << " ";
    }

    return 0;
}