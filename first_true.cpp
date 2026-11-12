#include <iostream>
using namespace std;
#define int long long
char ask(int n)
{
    cout << "? " << n << endl;
    char response;
    cin >> response;
    return response;
}
signed main()
{
    int n;
    cin >> n;
    int l = 1, r = n;
    int ans = n + 1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (ask(mid) == 'T')
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << "! " << ans << endl;
    return 0;
}