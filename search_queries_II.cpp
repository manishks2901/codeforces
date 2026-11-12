#include <iostream>
using namespace std;
using ll = long long;
int findIndex(ll arr[], ll size, ll k)
{
    ll startIndex = 0;
    ll endIndex = size - 1;
    while (startIndex <= endIndex)
    {
        ll mid = startIndex + (endIndex - startIndex) / 2;
        if (arr[mid] == k)
        {
            return mid + 1;
        }
        else if (arr[mid] > k)
        {
            startIndex = mid + 1;
        }
        else
        {
            endIndex = mid - 1;
        }
    }
    return -1;
}
int main()
{
    ll n, q;
    cin >> n >> q;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (ll i = 0; i < q; i++)
    {
        int temp;
        cin >> temp;
        cout << findIndex(arr, n, temp) << "\n";
    }

    return 0;
}