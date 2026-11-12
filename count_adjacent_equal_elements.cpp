#include <iostream>
using namespace std;
#define long long int;
int query(int arr[], int l, int r)
{
    if (l > r)
    {
        return 0;
    }
    else if (l == 0)
    {
        return arr[r];
    }
    else
    {
        return arr[r] - arr[l - 1];
    }
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
    int c[n - 1];
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            c[i] = 1;
        }
        else
        {
            c[i] = 0;
        }
    }

    int p[n - 1];
    int sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        sum += c[i];
        p[i] = sum;
    }

    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        sum = query(p, l, r - 1);
        cout << sum << endl;
    }
    return 0;
}