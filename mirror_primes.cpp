
#include <iostream>
#include <string>
using namespace std;

string reverseNumber(int n, string &s)
{
    if (n == 0)
    {
        return s;
    }

    s.push_back('0' + n % 10);
    return reverseNumber(n / 10, s);
}

int main()
{
    int n1 = 51;
    string s = "";

    string reversedNumber = reverseNumber(n1, s);
    int n2 = stoi(reversedNumber);

    bool c1, c2 = false;
    if (n1 % 2 == 0 && n2 % 2 == 0)
    {
        cout << true << endl;
    }

    return 0;
}
