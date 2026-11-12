#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int arr[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        int ch = s[i] - 'a';
        arr[ch]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] != 0)
        {
            cout << char('a' + i) << ":" << arr[i] << endl;
        }
    }

    return 0;
}