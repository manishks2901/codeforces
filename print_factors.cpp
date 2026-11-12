#include <iostream>
#include <set>

using namespace std;
int main()
{
    long long int n;
    cin >> n;
    set<long long int> numbers;
    for (long long int i = 1; i <= n / i; i++)
    {
        if (n % i == 0)
        {
            numbers.insert(i);
            numbers.insert(n / i);
        }
    }
    for (long long int val : numbers)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}