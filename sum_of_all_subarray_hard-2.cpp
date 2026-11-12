#include <iostream>
using namespace std;
#define int long long

signed main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i] * (n - i) * (i + 1);
    }

    cout << sum << endl;
    return 0;
}