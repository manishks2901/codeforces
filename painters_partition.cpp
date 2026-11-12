#include <iostream>
using namespace std;
#define int long long
bool possible(int arr[], int size, int k, int cap)
{
    int worker = 1;
    int length = 0;

    for (int i = 0; i < size; i++)
    {
        if (length + arr[i] <= cap)
        {
            length += arr[i];
        }
        else
        {
            worker++;
            length = arr[i];
        }
    }

    return worker <= k;
}
signed main()
{
    int n, k;
    cin >> n >> k;
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