#include <iostream>
#include <algorithm>
#include <numeric>
#include <climits>
using namespace std;
#define int long long

bool possible(int arr[], int size, int d, int cap)
{
    int days = 1;
    int weight = 0;
    for (int i = 0; i < size; i++)
    {
        if (weight + arr[i] <= cap)
        {
            weight += arr[i];
        }
        else
        {
            days++;
            weight = arr[i];
        }
    }

    return days <= d;
}
signed main()
{
    int n, d;
    cin >> n >> d;
    int arr[n];
    int l = INT_MIN;
    int r = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        l = max(l, arr[i]);
        r += arr[i];
    }

    int ans = -1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (possible(arr, n, d, mid))
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