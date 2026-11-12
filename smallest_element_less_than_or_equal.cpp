#include <iostream>
using namespace std;
#define int long long
int findGS(int arr[], int size, int target)
{
    int l = 0;
    int r = size - 1;
    int ans = -1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (arr[mid] >= target)
        {
            ans = arr[mid];
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return ans;
}
signed main()
{
    int n, q;
    cin >> n >> q;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);

    for (int i = 0; i < q; i++)
    {
        int query;
        cin >> query;
        int ans = findGS(arr, n, query);
        cout << ans << endl;
    }
    return 0;
}