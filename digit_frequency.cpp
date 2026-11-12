#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int arr[10] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        int num = s[i] - '0';
        arr[num]++;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}