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
    int total_sum = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum = sum + arr[j];
            total_sum = total_sum + sum;
        }
        }

    cout << total_sum << endl;
    return 0;
}