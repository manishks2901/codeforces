#include <iostream>
#include <set>
using namespace std;
using ll = long long;
int main()
{
    set<ll> s;
    ll n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        ll temp;
        cin >> temp;
        s.insert(temp);
    }

    cout << s.size() << endl;
    return 0;
}