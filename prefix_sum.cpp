#include <iostream>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    long long int arr[n];
    long long int q;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> q;
    long long int ar2[n];
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        ar2[i] = sum;
    }

    for (int i = 0; i < q; i++)
    {
        long long int l, r;
        cin >> l >> r;
        if (l == 0)
        {
            cout << ar2[r] << endl;
        }
        else
        {
            cout << ar2[r] - ar2[l] << endl;
        }
    }
}