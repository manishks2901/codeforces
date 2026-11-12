#include <iostream>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    long long int arr[n];
    for (long long int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (long long int i = 1; i < n; i++)
    {
        arr[i] = arr[i] + arr[i - 1];
    }

    long long int e;
    cin >> e;
    for (long long int i = 0; i < e; i++)
    {
        long long int x, y;
        cin >> x >> y;

        if (x == 1)
        {
            cout << arr[y - 1] << '\n';
        }
        else
        {
            cout << arr[y - 1] - arr[x - 2] << '\n';
        }
    }

    return 0;
}