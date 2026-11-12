#include <iostream>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    long long int arr[n][2];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i][0];
        cin >> arr[i][1];
    }
    for (int i = 0; i < n; i++)
    {
        long long int sum1 = arr[i][0] * (arr[i][0] + 1) / 2;
        long long int sum2 = arr[i][1] * (arr[i][1] + 1) / 2;

        cout << sum2 - sum1 + arr[i][0] << endl;
    }

    return 0;
}