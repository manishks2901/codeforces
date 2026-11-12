#include <iostream>
using namespace std;
#define int long long
bool possible(int arr[], int size, int target, int height)
{
    int waterRequired = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] <= height)
        {
            waterRequired += height - arr[i];
        }
    }

    return waterRequired <= target;
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int arr[n];
        int l = 1;
        int r = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            r = min(r, arr[i]);
        }
        r = r + x;
        int ans = -1;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (possible(arr, n, x, mid))
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}