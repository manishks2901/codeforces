#include <iostream>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int arr[n];
    long long sum = 0;
    int flag = 1;

    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;

        if (flag)
        {
            sum += x;
        }
        else
        {
            sum -= x;
        }

        arr[i] = sum;
        flag = !flag;
    }
    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;

        long long ans;

        if (l == 1)
        {
            ans = arr[r - 1];
        }
        else
        {
            ans = arr[r - 1] - arr[l - 2];
        }

        if (l % 2 == 0)
        {
            ans = -ans;
        }

        cout << ans << '\n';
    }

    return 0;
}