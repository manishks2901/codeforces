#include <iostream>
using namespace std;
#define int long long
char ask(int index)
{
    cout << "? " << index << endl;
    char res;
    cin >> res;
    return res;
}
signed main()
{
    int n;
    cin >> n;
    int l = 1, r = n;
    int ans = 0;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (ask(mid) == 'T')
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << "! " << ans << endl;
}