#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    if (s == "a1" || s == "a8" || s == "h1" || s == "h8")
    {
        cout << 3;
    }
    else if (s[1] == '1' || s[1] == '8' || s[0] == 'a' || s[0] == 'h')
    {
        cout << 5;
    }
    else
    {
        cout << 8;
    }
    return 0;
}