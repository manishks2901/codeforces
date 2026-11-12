#include <bits/stdc++.h>
using namespace std;
#define int long long

bool possible(int arr[], int size, int l, int width)
{
    int linesUsed = 1;
    int spaceUsed = arr[0];

    for (int i = 1; i < size; i++)
    {
        if ((spaceUsed + 1 + arr[i]) <= width)
        {
            spaceUsed += (1 + arr[i]);
        }
        else
        {
            linesUsed++;
            spaceUsed = arr[i];
        }
    }
    return linesUsed <= l;
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

    int l = *max_element(arr, arr + n);
    int r = accumulate(arr, arr + n, 0ll) + (n - 1);
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