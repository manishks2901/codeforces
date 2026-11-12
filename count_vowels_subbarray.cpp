#include <iostream>
#include <set>

using namespace std;
using ll = long long;

int main()
{
    ll n, k;
    cin >> n >> k;
    set<char> ch = {'a', 'e', 'i', 'o', 'u'};
    char s[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> s[i];
        s[i] = tolower(s[i]);
    }
    ll vowelCount = 0;
    for (ll i = 0; i < k; i++)
    {
        if (ch.find(s[i]) != ch.end())
        {
            vowelCount++;
        }
    }
    cout << vowelCount << " ";
    for (ll i = k; i < n; i++)
    {
        if (ch.find(s[i]) != ch.end())
        {
            vowelCount++;
        }
        if (ch.find(s[i - k]) != ch.end())
        {
            vowelCount--;
        }

        cout << vowelCount << " ";
    }
    cout << endl;

    return 0;
}