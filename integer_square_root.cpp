
#include <iostream>
using namespace std;
#define int long long

signed main()
{
    int n;
    cin >> n;

    if (n == 0)
    {
        cout << 0 << endl;
        return 0;
    }

    int l = 1;
    int r = n;
    int ans = -1;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (mid <= n / mid)
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
