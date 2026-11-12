
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    vector<long long> arr(n + 1, 0);

    for (long long i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    vector<long long> arr2(n + 1, 0);

    for (long long i = 1; i <= n; i++)
    {
        arr2[i] = arr2[i - 1];

        if (i % 2 == 0)
        {
            arr2[i] += arr[i];
        }
    }

    int q;
    cin >> q;

    while (q--)
    {
        long long x, y;
        cin >> x >> y;

        cout << arr2[y] - arr2[x - 1] << '\n';
    }

    return 0;
}
