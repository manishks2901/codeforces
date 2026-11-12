#include <iostream>
#include <algorithm>
#include <climits>

#define int long long
using namespace std;
void printMax(int arr[], int start, int end)
{
    int maxm = INT_MIN;
    for (int i = start; i <= end; i++)
    {
        maxm = max(maxm, arr[i]);
    }
    cout << maxm << endl;
}

signed main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {

        for (int j = i; j <= n - 1; j++)
        {
            printMax(arr, i, j);
        }
    }
    return 0;
}