
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    long long a, b;
    cin >> a >> b;

    vector<long long> arr(a);
    vector<long long> arr2(a + 2, 0);

    for (long long i = 0; i < a; i++)
    {
        cin >> arr[i];
    }

    for (long long i = 0; i < b; i++)
    {
        long long x, y, z;
        cin >> x >> y >> z;

        arr2[x] += z;
        arr2[y + 1] -= z;
    }

    for (long long i = 1; i <= a; i++)
    {
        arr2[i] += arr2[i - 1];
    }

    long long maxm = LLONG_MIN;

    for (long long i = 0; i < a; i++)
    {
        arr[i] += arr2[i + 1];
        maxm = max(maxm, arr[i]);
    }

    cout << maxm << '\n';

    return 0;
}
