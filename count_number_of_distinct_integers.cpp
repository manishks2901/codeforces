#include <iostream>
#include <unordered_map>
using namespace std;

using ll = long long;

int main()
{
    ll n, k;
    cin >> n >> k;

    ll arr[n];

    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    unordered_map<ll, ll> mp;

    // Build the first window
    for (ll i = 0; i < k; i++)
    {
        mp[arr[i]]++;
    }

    cout << mp.size() << " ";

    // Slide the window
    for (ll i = k; i < n; i++)
    {
        // Remove outgoing element
        mp[arr[i - k]]--;

        if (mp[arr[i - k]] == 0)
        {
            mp.erase(arr[i - k]);
        }

        // Add incoming element
        mp[arr[i]]++;

        cout << mp.size() << " ";
    }

    return 0;
}