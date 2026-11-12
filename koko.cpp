#include <iostream>
#include <climits>
using namespace std;
#define int long long
bool possible(int arr[], int size, int k, int cap)
{
    long long hours = 0;

    for (int i = 0; i < size; i++)
    {
        hours += arr[i] / cap;

        if (arr[i] % cap != 0)
        {
            hours++;
        }

        if (hours > k)
        {
            return false;
        }
    }

    return hours <= k;
}
signed main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    int l = 1;
    int r = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        r = max(r, arr[i]);
    }
    int ans = -1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (possible(arr, n, k, mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << ans << endl;
    return 0;
}