
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin >> n;

    int counter = 0;

    while (n.size() > 1)
    {
        long long product = 1;

        for (char c : n)
        {
            product *= (c - '0');
        }

        n = to_string(product);
        counter++;
    }

    cout << counter << '\n';

    return 0;
}
