
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

    for (int i = 1; i < n; i++)
    {
        arr[i] += arr[i - 1];
    }

    int index = -1;

    for (int i = 0; i < n; i++)
    {
        int left = (i == 0) ? 0 : arr[i - 1];
        int right = arr[n - 1] - arr[i];

        if (left == right)
        {
            index = i;
            break;
        }
    }

    cout << index << endl;

    return 0;
}
