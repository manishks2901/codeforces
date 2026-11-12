#include <iostream>
using namespace std;
int factors(int n)
{
    int count = 0;
    for (int i = 1; i <= n / i; i++)
    {
        if (n % i == 0)
        {
            if (i == n / i)
                count++;
            else
                count += 2;
        }
    }
    return count;
}
int main()
{
    int n, q, k;
    cin >> n >> q >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        int count = factors(arr[i]);
        if (count == k)
        {
            arr[i] = 1;
        }
        else
        {
            arr[i] = 0;
        }
    }
    for (int i = 1; i < n; i++)
    {
        arr[i] = arr[i] + arr[i - 1];
    }
    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        if (l - 1 == 0)
        {
            cout << arr[r - 1] << endl;
        }
        else
        {
            cout << arr[r - 1] - arr[l - 2] << endl;
        }
    }
}