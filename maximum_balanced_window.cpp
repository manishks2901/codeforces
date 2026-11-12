
#include <iostream>
#include <vector>
using namespace std;

using ll = long long;

int main()
{
    ll n, k;
    cin >> n >> k;

    vector<int> arr(n);

    ll nones = 0;
    ll nozero = 0;
    ll ans = 0;

    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (i < k)
        {
            if (arr[i] == 1)
                nones++;
            else
                nozero++;
        }
    }

    // Calculate answer for the first window
    ans = nones + (nozero > 0 ? 1 : 0);

    // Slide the window
    for (ll i = k; i < n; i++)
    {
        // Add new element
        if (arr[i] == 1)
            nones++;
        else
            nozero++;

        // Remove outgoing element
        if (arr[i - k] == 1)
            nones--;
        else
            nozero--;

        // Calculate answer for current window
        ll current = nones + (nozero > 0 ? 1 : 0);

        ans = max(ans, current);
    }

    cout << ans << endl;

    return 0;
}
