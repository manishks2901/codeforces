#include <iostream>
using namespace std;
#define int long long
bool possible(int arr[], int n, int cow, int gap)
{
    int cowPlaced = 1;
    int prev = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] - prev >= gap)
        {
            cowPlaced++;
            prev = arr[i];
        }
    }

    return cowPlaced >= cow;
}
signed main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int l = 1;
    int r = arr[n - 1] - arr[0];
    int ans = -1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (possible(arr, n, k, mid))
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
    return 0;
}