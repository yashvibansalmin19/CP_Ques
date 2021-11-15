#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    int n = s.size();
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] >= '5' && s[i] <= '9')
        {
            cout << "-O|";
            for (int j = 1; j <= s[i] - '5'; j++)
            {
                cout << "O";
            }
            cout << "-";
            for (int j = 1; j <= '9' - s[i]; j++)
            {
                cout << "O";
            }
            cout << "\n";
        }
        else
        {
            cout << "O-|";
            for (int j = 1; j <= s[i] - '0'; j++)
            {
                cout << "O";
            }
            cout << "-";
            for (int j = 1; j <= '4' - s[i]; j++)
            {
                cout << "O";
            }
            cout << "\n";
        }
    }
    return 0;
}