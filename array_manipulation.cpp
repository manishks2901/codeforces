
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    long long a, b;
    cin >> a >> b;

    vector<long long> arr(a + 2, 0);

    for (long long i = 0; i < b; i++)
    {
        long long x, y, z;
        cin >> x >> y >> z;

        arr[x] += z;
        arr[y + 1] -= z;
    }

    long long maxm = LLONG_MIN;

    for (long long i = 1; i <= a; i++)
    {
        arr[i] += arr[i - 1];
        maxm = max(maxm, arr[i]);
    }

    cout << maxm << '\n';

    return 0;
}
