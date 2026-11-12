#include <iostream>
using namespace std;
#define long long int;

bool isVowel(char c)
{
    switch (c)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        return true;
    default:
        return false;
    }
}

signed main()
{
    int n;
    cin >> n;
    char ch[n];
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        if (isVowel(c))
        {
            arr[i] = 1;
        }
        else
        {
            arr[i] = 0;
        }
    }
    for (int i = 1; i < n; i++)
    {
        arr[i] = arr[i] + arr[i - 1];
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        if (l - 1 == 0)
        {
            cout << arr[r - 1] << endl;
        }
        else
        {
            cout << arr[r - 1] - arr[l - 2] << endl;
        }
    }

    return 0;
}